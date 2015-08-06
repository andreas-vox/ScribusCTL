INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/scribus
${FREETYPE_INCLUDE_DIRS}
)

SET(SCRIBUS_HARFBUZZ_LIB_SOURCES
harfbuzz-arabic.c
harfbuzz-buffer.c
harfbuzz-dump.c
harfbuzz-freetype.c
harfbuzz-gdef.c
harfbuzz-gpos.c
harfbuzz-gsub.c
harfbuzz-hangul.c
harfbuzz-hebrew.c
harfbuzz-impl.c
harfbuzz-khmer.c
harfbuzz-myanmar.c
harfbuzz-open.c
harfbuzz-stream.c
harfbuzz-thai.c
harfbuzz-tibetan.c
harfbuzz-unicode.c
harfbuzz-unicode-tables.c
harfbuzz-indic.cpp
harfbuzz-shaper-all.cpp
harfbuzz-shaper.cpp
)


SET(SCRIBUS_HARFBUZZ_LIB "scribus_harfbuzz_lib")
ADD_LIBRARY(${SCRIBUS_HARFBUZZ_LIB} STATIC ${SCRIBUS_HARFBUZZ_LIB_SOURCES})
# This is a convenience library that for linkage purposes is part of Scribus's
# main API.
# SET_TARGET_PROPERTIES(${SCRIBUS_HARFBUZZ_LIB}
# PROPERTIES
# COMPILE_FLAGS -DCOMPILE_SCRIBUS_MAIN_APP
# )


