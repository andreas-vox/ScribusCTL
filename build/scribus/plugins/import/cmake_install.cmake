# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus/plugins/import

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
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/ai/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/cdr/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/cgm/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/cvg/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/drw/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/emf/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/idml/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/odg/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/oodraw/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/pages/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/pct/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/pdf/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/pm/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/pub/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/shape/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/sml/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/svg/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/svm/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/uniconvertor/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/viva/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/vsd/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/wmf/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/wpg/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/xar/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/xfig/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/import/xps/cmake_install.cmake")

endif()

