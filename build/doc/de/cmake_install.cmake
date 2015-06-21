# Install script for directory: /Users/vox/Scribus/ScribusCTL/doc/de

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/scribus/de" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/doc/de/about1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/about2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/bugreport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/cms.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/cms2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/cms3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/codingstandards.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color7a.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color7b.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/color7c.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/config.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/contributions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/developers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/doccopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/docinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/documentation.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/download.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/editorial.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/faq1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/faq2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/faq3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/fonts1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/fonts2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/gettexthowto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/gsview.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/hyphenator.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/importhints.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/importhints1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/importhints2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/importhints3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/importhints4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/index.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install-dpkg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/install5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/intro.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/irc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/keys.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/layers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/mailing_lists.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/moncal.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/mouse.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/otherinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pagenumber.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pagetemplate1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdf_form.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdfexport1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdfexport2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdfexport3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdfexport4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdflavor.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/pdfx3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/plugin_howto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/print1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/print2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/print3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/psd.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/readme-haiku.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/readme-macosx.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/readme-os2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/readme-win32.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/readme.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/releases.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/resources.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scribus-svg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scribuscopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scribusfileformat.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripter-extensions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripter-faq.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripter1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-color.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-constants.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-dialogs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-doc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-font.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-getobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-ImageExport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-layer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-manobj.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-object.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-page.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-PDFfile.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-Printer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-pydoc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-select.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-setobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi-textframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/scripterapi.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/settings1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/short-words.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/specs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox12.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox13.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox14.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox15.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox6.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox7.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox8.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/toolbox9.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/topten.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/translation_howto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/tutorials.html"
    "/Users/vox/Scribus/ScribusCTL/doc/de/menu.xml"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/doc/de/images/cmake_install.cmake")

endif()

