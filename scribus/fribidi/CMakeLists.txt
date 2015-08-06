INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/scribus
${FREETYPE_INCLUDE_DIRS}
)


SET(SCRIBUS_FRIBIDI_LIB_SOURCES
fribidi-arabic.c      
fribidi-joining-types.c
fribidi-bidi.c        
fribidi-mem.c
fribidi-bidi-types.c  
fribidi-mirroring.c
fribidi.c             
fribidi-run.c
fribidi-deprecated.c  
fribidi-shape.c
fribidi-joining.c
)


SET(SCRIBUS_FRIBIDI_LIB "scribus_fribidi_lib")
ADD_LIBRARY(${SCRIBUS_FRIBIDI_LIB} STATIC ${SCRIBUS_FRIBIDI_LIB_SOURCES})
# This is a convenience library that for linkage purposes is part of Scribus's
# main API.
# SET_TARGET_PROPERTIES(${SCRIBUS_FRIBIDI_LIB}
# PROPERTIES
# COMPILE_FLAGS -DCOMPILE_SCRIBUS_MAIN_APP
# )


