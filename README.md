# ScribusCTL

This is a branch of Scribus 1.5.1svn aimed at implementing complex text layout in Scribus.

The following phases are planed right now:

1. Make PDF production (and PS production and svg-export) glyph based instead of character based
2. Separate StoryText from Layout
3. Integrate Harfbuzz (OpenType library)
4. Implement a box-oriented layout mechanism, i.e. store the layout as a hierarchy of boxes
5. Integrate Fribidi (RTL library)
6. Expand the style system with CSS-like features

After each phase it's planned to merge the changes back into 1.5.1svn.


Contributors:
* Andreas Vox
* Mosaab Alzoubi

See ScribusCTL [Wiki](https://github.com/andreas-vox/ScribusCTL/wiki)
