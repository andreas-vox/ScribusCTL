# Install script for directory: /Users/vox/Scribus/ScribusCTL/resources/dicts

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local/Scribus1.5.1.svn.app/Contents")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/dicts/hyph" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_af.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_bg.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_ca.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_cs.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_da.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_de.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_de_1901.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_de_CH.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_el.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_en_GB.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_es.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_fi.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_fr.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_gl.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_hr.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_hu.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_ia.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_id.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_is.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_it.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_ku.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_lt.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_nb_NO.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_nl.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_nn_NO.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_pl.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_pt.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_pt_BR.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_ro.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_ru.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_sk.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_sl.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_sv.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/hyph_uk.dic"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_ca_ES.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_cs_CZ.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_cy_GB.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_de_1901.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_de_DE.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_en_EN.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_en_GB.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_es_ES.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_fi_FI.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hu_HU.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_da_DK.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_de_CH.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_de_DE.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_ia.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_nb_NO.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_nn_NO.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_pl_PL.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_hyph_ro_RO.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_id_ID.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_is_IS.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_ku.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_lt_LT.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_pt_BR.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_pt_PT.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_ru_RU_0.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_sk_SK.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_sl_SI.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_sv_SE.txt"
    "/Users/vox/Scribus/ScribusCTL/resources/dicts/README_uk_UA.txt"
    )
endif()

