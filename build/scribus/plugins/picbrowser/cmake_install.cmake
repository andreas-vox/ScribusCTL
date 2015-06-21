# Install script for directory: /Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE MODULE PERMISSIONS WORLD_EXECUTE GROUP_EXECUTE OWNER_EXECUTE WORLD_READ GROUP_READ OWNER_READ OWNER_WRITE FILES "/Users/vox/Scribus/ScribusCTL/build/scribus/plugins/picbrowser/libpicturebrowser.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpicturebrowser.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpicturebrowser.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpicturebrowser.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/icons" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/pitr_green_arrows_set_1.svg"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/pitr_green_arrows_set_5.svg"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/sarxos_Paper_Sheets.svg"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/sarxos_Simple_Folder_Seek.svg"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/sarxos_Simple_Green_Yellow_Blue_Violet_Folders.svg"
    "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/icons/testfill.png"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scribus/plugins" TYPE FILE FILES "/Users/vox/Scribus/ScribusCTL/scribus/plugins/picbrowser/collectionsdb.xml")
endif()

