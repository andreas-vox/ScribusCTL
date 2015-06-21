# Install script for directory: /Users/vox/Scribus/ScribusCTL/resources/templates

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.ca.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.de.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.es.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.hu.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/template.it.xml"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/br1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/br1/br1.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/br1/br1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/br1/map.jpg"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/br1/br1.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/nl1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl1/kites.jpg"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl1/nl1.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl1/nl1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl1/nl1.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/nl2" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl2/flowers.jpg"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl2/nl2.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl2/nl2tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/nl2/nl2.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/textbased" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/textbased/an_image.jpg"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/textbased/author.jpg"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/textbased/textbased.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/textbased/textbased.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/textbased/textbasedtn.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/pres_backgr_1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_1/blue_orange_vector.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_1/blue_orange_vectortn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_1/blue_orange_vector.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/pres_backgr_2" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_2/flood_light.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_2/flood_lighttn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_2/flood_light.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/pres_backgr_3" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_3/glass_ripples.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_3/glass_ripplestn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_3/glass_ripples.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/pres_backgr_4" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_4/bokeh.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_4/Bokehtn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/pres_backgr_4/Bokeh.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cc" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cc/Cheat_Cube.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cc/Cheat_Cubetn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cc/Cheat_Cube.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/mc" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/mc/menu_template1.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/mc/menu_template1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/mc/menu_template1.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cover1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover1/cover1.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover1/cover1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover1/cover1.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cover2" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover2/cover2.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover2/cover2tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover2/cover2.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cover3" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover3/cover3.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover3/cover3tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover3/cover3.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cover4" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover4/cover4.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover4/cover4tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover4/cover4.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/cover5" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover5/cover5.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover5/cover5tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/cover5/cover5.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard1/Business_Card_1.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard1/Business_Card_1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard1/buscard1.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard2" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard2/Business_Card_2.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard2/Business_Card_2tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard2/buscard2.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard3" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard3/Business_Card_3.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard3/Business_Card_3tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard3/buscard3.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard4" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard4/Business_Card_4.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard4/Business_Card_4tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard4/buscard4.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard5" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard5/Business_Card_5.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard5/Business_Card_5tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard5/buscard5.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard6" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard6/Business_Card_6.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard6/Business_Card_6tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard6/buscard6.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard7" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard7/Business_Card_7.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard7/Business_Card_7tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard7/buscard7.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard8" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard8/Business_Card_8.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard8/Business_Card_8tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard8/buscard8.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard9" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard9/Business_Card_9.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard9/Business_Card_9tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard9/buscard9.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard10" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard10/Business_Card_10.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard10/Business_Card_10tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard10/buscard10.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard11" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard11/Business_Card_11.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard11/Business_Card_11tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard11/buscard11.sla.gz"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_a4_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_l/Brochure_Grid_A4_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_l/Brochure_Grid_A4_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_l/Brochure_Grid_A4_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_a4_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_p/Brochure_Grid_A4_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_p/Brochure_Grid_A4_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a4_p/Brochure_Grid_A4_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_975x85in_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85in_l/Brochure_Grid_975x85in_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85in_l/Brochure_Grid_975x85_in_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85in_l/Brochure_Grid_975x85_in_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_975x85_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85_p/Brochure_Grid_975x85in_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85_p/Brochure_Grid_975x85_in_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_975x85_p/Brochure_Grid_975x85_in_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_375x85_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_p/Brochure_Grid_375x85in_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_p/Brochure_Grid_375x85_in_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_p/Brochure_Grid_375x85_in_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_375x85_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_l/Brochure_Grid_375x85in_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_l/Brochure_Grid_375x85_in_Landscapetn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_375x85_l/Brochure_Grid_375x85_in_Landscape.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_100x210_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_p/Brochure_Grid_100x210_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_p/Brochure_Grid_100x210_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_p/Brochure_Grid_100x210_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_100x210_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_l/Brochure_Grid_100x210_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_l/Brochure_Grid_100x210_mm_Landscapetn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_100x210_l/Brochure_Grid_100x210_mm_Landscape.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_55x86in_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x86in_p/Brochure_Grid_55x85in_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x86in_p/Brochure_Grid_55x85in_Portraoittn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x86in_p/Brochure_Grid_55x85in_Portraoit.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_55x85in_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x85in_l/Brochure_Grid_55x85in_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x85in_l/Brochure_Grid_55x85_in_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_55x85in_l/Brochure_Grid_55x85_in_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_poster_a3" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a3/Poster_Grid_A3.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a3/Poster_Grid_A3tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a3/Poster_Grid_A3.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_poster_a2" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a2/Poster_Grid_A2.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a2/Poster_Grid_A2tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a2/Poster_Grid_A2.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_poster_a1" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a1/Poster_Grid_A1.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a1/Poster_Grid_A1tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a1/Poster_Grid_A1.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_poster_a0" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a0/Poster_Grid_A0.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a0/Poster_Grid_A0tn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_poster_a0/Poster_Grid_A0.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_poster_a0" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_p/Brochure_Grid_USL_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_p/Brochure_Grid_USL_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_p/Brochure_Grid_USL_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_usl_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_l/Brochure_Grid_USL_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_l/Brochure_Grid_USL_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_usl_l/Brochure_Grid_USL_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_dinl_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_p/Brochure_Grid_DIN_LANG_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_p/Brochure_Grid_DIN_LANG_Ptn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_p/Brochure_Grid_DIN_LANG_P.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_dinl_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_l/Brochure_Grid_DIN_LANG_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_l/Brochure_Grid_DIN_LANG_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_dinl_l/Brochure_Grid_DIN_LANG_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_a5_p" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_p/Brochure_Grid_A5_P.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_p/Brochure_Grid_A5_Portraittn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_p/Brochure_Grid_A5_Portrait.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/grid_br_a5_l" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_l/Brochure_Grid_A5_L.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_l/Brochure_Grid_A5_Ltn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/grid_br_a5_l/Brochure_Grid_A5_L.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/templates/buscard_coll" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard_coll/business_card_collection.sla.gz"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard_coll/Business_Card_Collectiontn.png"
    "/Users/vox/Scribus/ScribusCTL/resources/templates/buscard_coll/Business_Card_Collection.png"
    )
endif()

