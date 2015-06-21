# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/MacOS" TYPE DIRECTORY FILES "")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/MacOS" TYPE EXECUTABLE FILES "/Users/vox/Scribus/ScribusCTL/build/scribus/Scribus")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/MacOS/Scribus" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/MacOS/Scribus")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/MacOS/Scribus")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/scribus/scribus.css")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/dtd/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/manpages/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/colormgmt/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/desaxe/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/fonts/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/styles/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/text/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/ui/qml/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/unicodemap/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/third_party/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/cmake_install.cmake")

endif()

