# Install script for directory: /Users/vox/Scribus/ScribusCTL/resources/editorconfig

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/editorconfig" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/100_latex.tar"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/100_latex.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/200_gnuplot.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/gnuplot.png"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/300_lilypond.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/lilypond.png"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/400_dot.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/dot.svg"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/500_povray.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/editorconfig/povray_32.png"
    )
endif()

