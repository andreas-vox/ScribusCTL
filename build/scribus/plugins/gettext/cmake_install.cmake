# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus/plugins/gettext

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/csvim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/docim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/htmlim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/odtim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/pdbim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/sxwim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/textfilter/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/txtim/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/gettext/xtgim/cmake_install.cmake")

endif()

