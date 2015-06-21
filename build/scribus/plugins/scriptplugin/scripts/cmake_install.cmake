# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/scripts" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/Autoquote.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/CalendarWizard.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/ColorChart.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/DirectImageImport.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/FontSample.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/InfoBox.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/ChangeLog"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/NEWS"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/ReadMe"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/TODO"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/color2csv.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/csv2color.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/scripts/importcsv2table.py"
    )
endif()

