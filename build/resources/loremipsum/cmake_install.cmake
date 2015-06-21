# Install script for directory: /Users/vox/Scribus/ScribusCTL/resources/loremipsum

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/loremipsum" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/ar.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/cs.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/da.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/de.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/el.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/en_GB.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/eo.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/fi.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/fr.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/he.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/it.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/ja.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/la.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/lt.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/nl.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/ru.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/sk.xml"
    "/Users/vox/Scribus/ScribusCTL/resources/loremipsum/sl.xml"
    )
endif()

