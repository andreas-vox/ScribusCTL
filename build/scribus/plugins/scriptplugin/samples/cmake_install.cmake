# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/samples" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/3columnUSLTR.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/3columnA4.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/boilerplate.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/Calender.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/ExtractText.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/golden-mean.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/legende.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/moins_10_pourcent_group.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/plus_10_pourcent_group.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/pochette_cd.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/quote.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/sample_db_usage.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/Sample1.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/trait_de_coupe.py"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/scriptplugin/samples/wordcount.py"
    )
endif()

