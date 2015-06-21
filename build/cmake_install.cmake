# Install script for directory: /Users/vox/Scribus/ScribusCTL

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/scribus" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/AUTHORS"
    "/Users/vox/Scribus/ScribusCTL/BUILDING"
    "/Users/vox/Scribus/ScribusCTL/ChangeLog"
    "/Users/vox/Scribus/ScribusCTL/ChangeLogSVN"
    "/Users/vox/Scribus/ScribusCTL/COPYING"
    "/Users/vox/Scribus/ScribusCTL/LINKS"
    "/Users/vox/Scribus/ScribusCTL/NEWS"
    "/Users/vox/Scribus/ScribusCTL/PACKAGING"
    "/Users/vox/Scribus/ScribusCTL/README"
    "/Users/vox/Scribus/ScribusCTL/TODO"
    "/Users/vox/Scribus/ScribusCTL/TRANSLATION"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/scribus" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/README.MacOSX")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/scribus.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mimelnk/application" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/vnd.scribus.desktop")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/Scribus1.5.1.svn.app/Contents/Info.plist")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/Scribus1.5.1.svn.app/Contents" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/Scribus.app/Contents/Info.plist")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/Scribus1.5.1.svn.app/Contents/Resources/Scribus.icns;/usr/local/Scribus1.5.1.svn.app/Contents/Resources/Scribus-doc.icns")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/Scribus1.5.1.svn.app/Contents/Resources" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/Scribus.app/Contents/Resources/Scribus.icns"
    "/Users/vox/Scribus/ScribusCTL/Scribus.app/Contents/Resources/Scribus-doc.icns"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/scribus/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/doc/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/dicts/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/editorconfig/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/icons/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/keysets/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/loremipsum/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/profiles/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/swatches/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/templates/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/resources/translations/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "/Users/vox/Scribus/ScribusCTL/build/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "/Users/vox/Scribus/ScribusCTL/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
