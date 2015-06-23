/**
    HarfBuzz glue

    Author: Hasen il Judy 
 */

#include <QString>
#include <QVector>
#include <QDebug>

#include "shaper.h"
#include "fonts/ftface.h"
#include "fonts/scface.h"

//pointless proxy
HB_Script charScript(uint cp)
{
    return code_point_to_script(cp);
}

/**
    The HB_Script of the given utf32 string

    @param pos: (optional, output) the position of the first script character (after skipping past Inherited)
 */
HB_Script stringScript(QVector<uint> ustr, int *pos)
{
    HB_Script script = charScript(ustr[0]);

    if(pos)
    {
        *pos = 0;
    }

    if(script == HB_Script_Inherited) 
    {
        //oh no, generic script! grab the first
        //script we can find
        int i = 0;
        for(i = 0; i < ustr.size(); i++)
        {
            HB_Script script_candidate = charScript(ustr[i]);
            if(script_candidate != HB_Script_Inherited)
            {
                script = script_candidate;
                break;
            }
        }
        if(pos)
        {
            *pos = i;
        }

    }

    //even after the loop!
    if(script == HB_Script_Inherited)
    {
        script = HB_Script_Common;
    }
    return script;
}

int nextScriptRun(QUtf32 ustr, int start)
{
    HB_Script script = charScript(ustr[start]);
    int index = start;

    while(index < ustr.size())
    {
        index++;
        HB_Script current_script = charScript(ustr[index]);
        if(current_script != script && current_script != HB_Script_Inherited) //inherited is considered to be part of the same script run
        {
            break;
        }
    }
    return index;
}

/**
    The FT_Face should be initialized already in scribus, but I can't access it!!!

    based on tests/fuzzing/fuzz.cc
 */
ShaperFontInfo::ShaperFontInfo(ScFace scface, qreal size)
{
    face = 0;
    FT_Library library = 0;
    // XXX: deal with error
    bool error = FT_Init_FreeType(&library);
    if(error)
    {
        qDebug() << "error initing FT library";
    }
    // qDebug() << "font file:" << scface.fontFilePath();
    error = FT_New_Face(library, 
            scface.fontFilePath().toUtf8().data(), 
            scface.faceIndex(), &face);
    if(error)
    {
        qDebug() << "error loading FT font?";
    }
    error = FT_Set_Char_Size(face, 0, 10, 72, 72); // XXX: not sure what should I put here!! fonts/ftface puts 10 for the size, why?
    if(error)
    {
        qDebug() << "error setting font size";
    }
    hbFace = HB_NewFace(face, hb_freetype_table_sfnt_get);
    hbFont.klass = &hb_freetype_class;
    hbFont.userData = face;
    hbFont.x_ppem  = face->size->metrics.x_ppem;
    hbFont.y_ppem  = face->size->metrics.y_ppem;
    hbFont.x_scale = face->size->metrics.x_scale;
    hbFont.y_scale = face->size->metrics.y_scale;
}

ShaperFontInfo::~ShaperFontInfo()
{
    FT_Done_Face(face);
}

// fonts/ftface uses this thing (uniEM) to get the proper xadvance, 
// I'm really *not* sure how I should use it, right now it's unused
qreal ShaperFontInfo::uniEM()
{
    return static_cast<qreal>(face->units_per_EM);
}

/**
    based on tests/fuzzing/fuzz.cc
 */
ShaperItemInfo::ShaperItemInfo(ShaperFontInfo *font)
{
    shaper_item.kerning_applied = true;
    shaper_item.string = (HB_UChar16 *) str;
    shaper_item.stringLength = maxLength;
    shaper_item.item.bidiLevel = 1;
    shaper_item.shaperFlags = 0;
    shaper_item.font = font->get_HB_Font();
    shaper_item.face = font->get_HB_Face();
    shaper_item.glyphIndicesPresent = false;
    shaper_item.initialGlyphCount = 0;

    shaper_item.glyphs = new HB_Glyph[maxLength];
    shaper_item.attributes = new HB_GlyphAttributes[maxLength];
    shaper_item.advances = new HB_Fixed[maxLength];
    shaper_item.offsets = new HB_FixedPoint[maxLength];
    shaper_item.log_clusters = new unsigned short[maxLength];
    shaper_item.num_glyphs = maxLength; // XXX really?
}

ShaperItemInfo::~ShaperItemInfo()
{
    delete[] shaper_item.glyphs;
    delete[] shaper_item.attributes;
    delete[] shaper_item.advances;
    delete[] shaper_item.offsets;
    delete[] shaper_item.log_clusters;
}


/**
    Do the shaping for this string.

    Assume str is an item, i.e. same script across the entire string
 */
ShaperOutput ShaperItemInfo::shapeItem(QString str)
{
    if(str.length() == 0)
        return ShaperOutput();

    QVector<uint> ustr = str.toUcs4(); //XXX let stringScript work with utf16

    shaper_item.string = str.utf16();
    shaper_item.stringLength = str.length();
    shaper_item.item.script = stringScript(ustr, 0);
    shaper_item.item.pos = 0;
    shaper_item.item.length = str.length();

    HB_ShapeItem(&shaper_item);

    return ShaperOutput(&shaper_item);
}

/**
    Use HarfBuzz to shape segment in question
 */
void shapeGlyphs(StoryText *itemText, int startIndex, int endIndex)
{
    if(startIndex < 0 || endIndex < 1) { return; }

    QString text = itemText->text(startIndex, endIndex-startIndex); //this one takes pos, len

    ScText * scitem = itemText->item(startIndex);
    ScFace scface = scitem->font();
    qreal size = scitem->fontSize();
    
    ShaperFontInfo font(scface, size / 10.0);
    ShaperItemInfo shaper(&font);
    ShaperOutput out = shaper.shapeItem(text); //HarfBuzz Magic

    //out.glyphs has our glyphs
    for(uint i = 0; i < out.num_glyphs; i++)
    {
        GlyphLayout &glyph = itemText->item(startIndex + i)->glyph;
        glyph.glyph = out.glyphs[i];

        // XXX: I can't figure out how to use the advances returned by harfbuzz
        //      to position the glyphs, so I'm going to ask the scribus font
        //      class to get the advances for me, then I'll handle marks as
        //      a special case where there's no advance
        //
        //      Please somebody FIXME
        //
        glyph.xadvance = scface.glyphWidth(glyph.glyph, size); //works .. sorta!!

        if(out.attributes[i].mark) //HACK vowel marks
        {
            glyph.xadvance = 0;
        }

        //debugging
        // qDebug() << "glyphs[" << i << "] =" << out.glyphs[i];
        // qDebug() << "advance[" << i << "] =" << out.advances[i];
    }

    if(out.num_glyphs < (uint)text.length())
    {
        // There were some ligatures, so zero-out the extra characters at the end of this run
        for(int i = out.num_glyphs; i < text.length(); i++)
        {
            GlyphLayout &glyph = itemText->item(startIndex + i)->glyph;
            glyph.glyph = scface.char2CMap(QChar::Nbsp);
            glyph.xadvance = 0;
        }

    }
}

bool isCommonScript(QString str)
{
    return stringScript(str.toUcs4()) == HB_Script_Common; 
}

