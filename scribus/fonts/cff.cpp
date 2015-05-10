//
//  cff.cpp
//  Scribus
//
//  Created by Andreas Vox on 04.05.15.
//
//

#include "cff.h"

#include <cmath>
#include <QDebug>

namespace cff {
    
    static const char* stdStrings[] = {
        /* 0 */
        ".notdef",
        "space",
        "exclam",
        "quotedbl",
        "numbersign",
        "dollar",
        "percent",
        "ampersand",
        "quoteright",
        "parenleft",
        /* 10 */
        "parenright",
        "asterisk",
        "plus",
        "comma",
        "hyphen",
        "period",
        "slash",
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "colon",
        "semicolon",
        "less",
        /* 30 */
        "equal",
        "greater",
        "question",
        "at",
        "A",
        "B",
        "C",
        "D",
        "E",
        "F",
        "G",
        "H",
        "I",
        "J",
        "K",
        "L",
        "M",
        "N",
        "O",
        "P",
        /* 50 */
        "Q",
        "R",
        "S",
        "T",
        "U",
        "V",
        "W",
        "X",
        "Y",
        "Z",
        "bracketleft",
        "backslash",
        "bracketrigh",
        "asciicircum",
        "underscore",
        "quoteleft",
        "a",
        "b",
        "c",
        "d",
        /* 70 */
        "e",
        "f",
        "g",
        "h",
        "i",
        "j",
        "k",
        "l",
        "m",
        "n",
        "o",
        "p",
        "q",
        "r",
        "s",
        "t",
        "u",
        "v",
        "w",
        "x",
        /* 90 */
        "y",
        "z",
        "braceleft",
        "bar",
        "braceright",
        "asciitilde",
        "exclamdown",
        "cent",
        "sterling",
        "fraction",
        /* 100  */
        "yen",
        "florin",
        "section",
        "currency",
        "quotesingle",
        "quotedblleft",
        "guillemotleft",
        "guilsinglleft",
        "guilsinglright",
        "fi",
        "fl",
        "endash",
        "dagger",
        "daggerdbl",
        "periodcentered",
        "paragraph",
        "bullet",
        "quotesinglbase",
        "quotedblbase",
        "quotedblright",
        /* 120 */
        "guillemotright",
        "ellipsis",
        "perthousand",
        "questiondown",
        "grave",
        "acute",
        "circumflex",
        "tilde",
        "macron",
        "breve",
        "dotaccent",
        "dieresis",
        "ring",
        "cedilla",
        "hungarumlaut",
        "ogonek",
        "caron",
        "emdash",
        "AE",
        "ordfeminine",
        /* 140 */
        "Lslash",
        "Oslash",
        "OE",
        "ordmasculine",
        "ae",
        "dotlessi",
        "lslash",
        "oslash",
        "oe",
        "germandbls",
        "onesuperior",
        "logicalnot",
        "mu",
        "trademark",
        "Eth",
        "onehalf",
        "plusminus",
        "Thorn",
        "onequarter",
        "divide",
        /* 160 */
        "brokenbar",
        "degree",
        "thorn",
        "threequarters",
        "twosuperior",
        "registered",
        "minus",
        "eth",
        "multiply",
        "threesuperior",
        "copyright",
        "Aacute",
        "Acircumflex",
        "Adieresis",
        "Agrave",
        "Aring",
        "Atilde",
        "Ccedilla",
        "Eacute",
        "Ecircumflex",
        /* 180 */
        "Edieresis",
        "Egrave",
        "Iacute",
        "Icircumflex",
        "Idieresis",
        "Igrave",
        "Ntilde",
        "Oacute",
        "Ocircumflex",
        "Odieresis",
        "Ograve",
        "Otilde",
        "Scaron",
        "Uacute",
        "Ucircumflex",
        "Udieresis",
        "Ugrave",
        "Yacute",
        "Ydieresis",
        "Zcaron",
        /* 200 */
        "aacute",
        "acircumflex",
        "adieresis",
        "agrave",
        "aring",
        "atilde",
        "ccedilla",
        "eacute",
        "ecircumflex",
        "edieresis",
        "egrave",
        "iacute",
        "icircumflex",
        "idieresis",
        "igrave",
        "ntilde",
        "oacute",
        "ocircumflex",
        "odieresis",
        "ograve",
        /* 220 */
        "otilde",
        "scaron",
        "uacute",
        "ucircumflex",
        "udieresis",
        "ugrave",
        "yacute",
        "ydieresis",
        "zcaron",
        "exclamsmall",
        "Hungarumlautsmall",
        "dollaroldstyle",
        "dollarsuperior",
        "ampersandsmall",
        "Acutesmall",
        "parenleftsuperior",
        "parenrightsuperior",
        "twodotenleader",
        "onedotenleader",
        "zerooldstyle",
        /* 240 */
        "oneoldstyle",
        "twooldstyle",
        "threeoldstyle",
        "fouroldstyle",
        "fiveoldstyle",
        "sixoldstyle",
        "sevenoldstyle",
        "2eightoldstyle",
        "nineoldstyle",
        "commasuperior",
        "threequartersemdash",
        "periodsuperior",
        "questionsmall",
        "asuperior",
        "bsuperior",
        "centsuperior",
        "dsuperior",
        "esuperior",
        "isuperior",
        "lsuperior",
        /* 260 */
        "msuperior",
        "nsuperior",
        "osuperior",
        "rsuperior",
        "ssuperior",
        "tsuperior",
        "ff",
        "ffi",
        "ffl",
        "parenleftinferior",
        "parenrightinferior",
        "Circumflexsmall",
        "hyphensuperior",
        "Gravesmall",
        "Asmall",
        "Bsmall",
        "Csmall",
        "Dsmall",
        "Esmall",
        "Fsmall",
        /* 280 */
        "Gsmall",
        "Hsmall",
        "Ismall",
        "Jsmall",
        "Ksmall",
        "Lsmall",
        "Msmall",
        "Nsmall",
        "Osmall",
        "Psmall",
        "Qsmall",
        "Rsmall",
        "Ssmall",
        "Tsmall",
        "Usmall",
        "Vsmall",
        "Wsmall",
        "Xsmall",
        "Ysmall",
        "Zsmall",
        /* 300 */
        "colonmonetary",
        "onefitted",
        "rupiah",
        "Tildesmall",
        "exclamdownsmall",
        "centoldstyle",
        "Lslashsmall",
        "Scaronsmall",
        "Zcaronsmall",
        "Dieresissmall",
        "Brevesmall",
        "Caronsmall",
        "Dotaccentsmall",
        "Macronsmall",
        "iguredash",
        "hypheninferior",
        "goneksmall",
        "Ringsmall",
        "Cedillasmall",
        "questiondownsmall",
        /* 320 */
        "oneeighth",
        "hreeeighths",
        "fiveeighths",
        "seveneighths",
        "onethird",
        "twothirds",
        "zerosuperior",
        "foursuperior",
        "fivesuperior",
        "sixsuperior",
        "sevensuperior",
        "eightsuperior",
        "ninesuperior",
        "zeroinferior",
        "oneinferior",
        "twoinferior",
        "threeinferior",
        "fourinferior",
        "fiveinferior",
        "sixinferior",
        /* 340 */
        "seveninferior",
        "eightinferior",
        "nineinferior",
        "centinferior",
        "dollarinferior",
        "periodinferior",
        "commainferior",
        "Agravesmall",
        "Aacutesmall",
        "Acircumflexsmall",
        "Atildesmall",
        "Adieresissmall",
        "Aringsmall",
        "AEsmall",
        "Ccedillasmall",
        "Egravesmall",
        "Eacutesmall",
        "Ecircumflexsmall",
        "Edieresissmall",
        "Igravesmall",
        /* 360 */
        "Iacutesmall",
        "Icircumflexsmall",
        "Idieresissmall",
        "Ethsmall",
        "Ntildesmall",
        "Ogravesmall",
        "Oacutesmall",
        "Ocircumflexsmall",
        "Otildesmall",
        "Odieresissmall",
        "OEsmall",
        "Oslashsmall",
        "Ugravesmall",
        "Uacutesmall",
        "Ucircumflexsmall",
        "Udieresissmall",
        "Yacutesmall",
        "Thornsmall",
        "Ydieresissmall",
        "001.000",
        /* 380 */
        "001.001",
        "001.002",
        "001.003",
        "Black",
        "Bold",
        "Book",
        "Light",
        "Medium",
        "Regular",
        "Roman",
        /* 390 */
        "Semibold"
    };
    
    bool CFF_Number::isCardinal() const
    {
        switch (type)
        {
            case cff_varnt_Error:
            case cff_varnt_Real:
                return false;
            default:
                return true;
        }
    }
    
    double CFF_Number::toDouble() const
    {
        switch (type)
        {
            case cff_varnt_Real:
                return card * std::pow(10.0, exponent);
            default:
                return toCardinal();
        }

    }
    
    int CFF_Number::toCardinal() const
    {
        return card;
    }

    CFF::CFF(const QByteArray& cff) : bytes(cff)
    {
        // read header
        offsetSize = cff[cff_offSize];
        uint pos = cff[cff_hdrSize];
        // read names
        QList<QByteArray> fontNames = readIndex(pos);
        // read top dicts
        QList<QByteArray> topDicts = readIndex(pos);
        for (int i = 0; i < fontNames.length(); ++i)
        {
            QByteArray fontName = fontNames[i];
            if (fontName.length() > 0 && fontName[0] != char(0))
            {
                fontTopDicts[fontName] = readDict(topDicts[i]);
            }
        }
        // read strings
        for (int i = 0; i < sid_last_std; ++i)
        {
            strings.append(stdStrings[i]);
        }
        strings.append(readIndex(pos));
        for (int i = 0; i < strings.length(); ++i)
        {
            sids[strings[i]] = i;
        }
        // readglobal subroutines
        globalSubr = readIndex(pos);
    }
    
    
    CFF_Number CFF::createSid(const QByteArray& str)
    {
        CFF_Number result;
        result.type = cff_varnt_SID;
        if (!sids.contains(str))
        {
            result.card = strings.length();
            strings.append(str);
            sids[str] = result.card;
        }
        else
        {
            result.card = sids[str];
        }
        return result;
    }
    
    
    QByteArray CFF::readSegment(uint pos, uint size) const
    {
        return QByteArray::fromRawData(bytes.data() + pos, size);
    }
    
    
    uint CFF::readCard(uint pos) const
    {
        return bytes[pos] << 8 | bytes[pos+1];
    }
    
    
    
    QHash<operator_type,CFF_Variant> CFF::readDict(const QByteArray& dict) const
    {
        QHash<uint,CFF_Variant> result;
        QList<CFF_Number> stack;
        
        uint pos = 0;
        while (pos < dict.length())
        {
            CFF_Number num; ;
            if (parseDict(dict, pos, num))
            {
                if (stack.length() == 1)
                {
                    result[num.card] = CFF_Variant(stack[0]);
                }
                else if (stack.length() > 0)
                {
                    result[num.card] = CFF_Variant(stack);
                }
                else
                {
                    /* error */
                }
                stack = QList<CFF_Number>();
            }
            else
            {
                stack.append(num);
            }
        }
        if (stack.length() > 0)
        {
            /* error */
        }
        // TODO: adapt variant type according to operator
        return result;
    }
    
    
    bool CFF::parseDict(const QByteArray& dict, uint& pos, CFF_Number& num) const
    {
        uint code = dict[pos];
        switch (code)
        {
            case cff_dict_TwoBytes:
                code = (code << 8) | dict[++pos];
                break;
            case cff_dict_Card16:
            case cff_dict_Card32:
                num = parseCard(dict, pos);
                return false;
            case cff_dict_Real:
                num = parseReal(dict, pos);
                return false;
            default:
                if (code >= cff_dict_minOperand)
                {
                    num = parseCard(dict, pos);
                    return false;
                }
                break;
        }
        ++pos;
        num.type = cff_varnt_Operator;
        num.card = code;
        return true;
    }
    
    
    CFF_Number CFF::parseCard(const QByteArray& dict, uint& pos) const
    {
        CFF_Number result;
        result.type = cff_varnt_Card;
        result.exponent = 0;
        uchar b0 = dict[pos++];
        if (b0 == cff_dict_Card16)
        {
            result.card = static_cast<qint16>((dict[pos++] << 8) | dict[pos++]);
        }
        else if (b0 == cff_dict_Card32)
        {
            result.card = static_cast<qint32>((dict[pos++] << 24) | (dict[pos++] << 16) | (dict[pos++] << 8) | dict[pos++]);
        }
        else if (b0 < cff_dict_minOperand)
        {
            /* error */
        }
        else if (b0 <= cff_dict_maxSmallCard)
        {
            result.card = b0 + cff_dict_biasSmallCard;
        }
        else if (b0 <= cff_dict_maxPosCard)
        {
            result.card = (b0 - cff_dict_minPosCard) * 256 + dict[pos++] + cff_dict_biasPosCard;
        }
        else if (b0 <= cff_dict_maxNegCard)
        {
            result.card = (cff_dict_minNegCard - b0) * 256 - dict[pos++] + cff_dict_biasNegCard;
        }
        else
        {
            /* error */
        }
        return result;
    }
    
    
    CFF_Number CFF::parseReal(const QByteArray& dict, uint& pos) const
    {
        /* dict[pos] == cff_dict_Real */
        CFF_Number result;
        result.type = cff_varnt_Real;
        result.card = 0;
        result.exponent = 0;
        bool upperNibble = false;
        bool haveSeenMinus = false;
        bool haveSeenE = false;;
        bool haveSeenEminus = false;
        int decimalPointAt = -1;
        uchar nibble, twoNibbles;
        do
        {
            // get nibble
            if (upperNibble)
            {
                nibble = twoNibbles & 0x0f;
                upperNibble = false;
            }
            else
            {
                twoNibbles = dict[++pos];
                nibble = twoNibbles >> 4;
                upperNibble = true;
            }
            
            // decode
            switch (nibble)
            {
                case cff_nibble_Minus:
                    haveSeenMinus = !haveSeenMinus;
                    break;
                case cff_nibble_Point:
                    decimalPointAt = 0;
                    break;
                case cff_nibble_PosExp:
                    haveSeenE = true;
                    break;
                case cff_nibble_NegExp:
                    haveSeenEminus = true;
                    break;
                case cff_nibble_End:
                    break;
                default:
                    if (nibble > cff_nibble_maxDigit)
                    {
                        /* error */
                    }
                    else if (haveSeenE || haveSeenEminus)
                    {
                        result.exponent *= 10;
                        result.exponent += nibble;
                    }
                    else
                    {
                        result.card *= 10;
                        result.card += nibble;
                        if (decimalPointAt >= 0)
                        {
                            ++decimalPointAt;
                        }
                    }
                    break;
            }
        } while (nibble != cff_nibble_End);
            
        // finish
        if (haveSeenMinus)
            result.card = -result.card;
        if (haveSeenEminus)
            result.exponent = -result.exponent;
        if (decimalPointAt > 0)
            result.exponent -= decimalPointAt;
        return result;
    }
    
    
    QList<QByteArray> CFF::readIndex(uint& pos) const
    {
        QList<QByteArray> result;
        uint N = readCard(pos);
        pos += 2;
        uint offSize = bytes[pos++];
        uint dataStart = pos + offSize * (N+1);
        uint start = 0;
        uint end;
        for (int c = 0; c < offSize; ++c)
        {
            start = start << 8 | bytes[pos++];
        }
        for (int i = 0; i < N; ++i)
        {
            end = 0;
            for (int c = 0; c < offSize; ++c)
            {
                end = end << 8 | bytes[pos++];
            }
            result.append(readSegment(start, end-start));
            start = end;
        }
        return result;
    }
    
    QByteArray CFF::dump(const CFF_Variant& var)
        {
            QByteArray result;
            switch(var.type)
            {
                case cff_varnt_Error:
                    result += "ERROR";
                    break;
                case cff_varnt_Card:
                case cff_varnt_Bool:
                case cff_varnt_SID:
                    result += QByteArray::number(var.array[0].toCardinal());
                    break;
                case cff_varnt_Real:
                    result += QByteArray::number(var.array[0].toDouble());
                    break;
                case cff_varnt_Operator:
                    result += string(var.array[0].toCardinal());
                    result += " (";
                    result += QByteArray::number(var.array[0].toCardinal());
                    result +=")";
                    break;
                case cff_varnt_Delta:
                    result += "Delta";
                    /* fall thru */
                case cff_varnt_Array:
                    result += "[";
                    for (int i = 0; i < var.array.length(); ++i)
                    {
                        result += QByteArray::number(var.array[0].toDouble());
                        result += ", ";
                    }
                    result.chop(2);
                    result += "]";
                    break;
            }
            return result;
        }
    
                        
    void CFF::dump()
    {
        qDebug() << "CFF" << fontTopDicts.count() << "fonts, size =" << bytes.size() << "offset size=" << offsetSize;
        QMap<QByteArray,QHash<operator_type,CFF_Variant> >::Iterator it;
        for (it = fontTopDicts.begin(); it != fontTopDicts.end(); ++it)
        {
            qDebug() << "Font" << it.key() << ":";
            QHash<operator_type, CFF_Variant>::Iterator it2;
            for (it2= it.value().begin(); it2 != it.value().end(); ++it2)
            {
                qDebug() << "\t" << string(it2.key()) << "=" << dump(it2.value());
            }
        }
    }
    CFF CFF::extract(uint faceIndex)
    {
        
    }
    
    
    CFF CFF::subset(QList<uint> cids)
    {
        
    }
    
} // namespace
