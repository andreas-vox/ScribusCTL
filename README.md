# ScribusCTL

This is a branch of Scribus 1.5.1svn aimed at implementing complex text layout in Scribus.

NOTE: work has proceeded on the HOST_Oman repo: https://github.com/HOST-Oman/scribus BRANCH "ctl"

Items 1-5 below are basically done and the final version will be merged with 1.5.3svn.

The following phases are planned right now:

1. Make PDF production (and PS production and svg-export) glyph based instead of character based
2. Separate StoryText from Layout
3. Integrate Harfbuzz (OpenType library)
4. Implement a box-oriented layout mechanism, i.e. store the layout as a hierarchy of boxes
5. Integrate Fribidi (RTL library)
6. Expand the style system with CSS-like features

After each phase it's planned to merge the changes back into 1.5.1svn.


Contributors:
* Andreas Vox
* you

See ScribusCTL [Wiki](https://github.com/andreas-vox/ScribusCTL/wiki)
