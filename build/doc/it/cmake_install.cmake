# Install script for directory: /Users/vox/Scribus/ScribusCTL/doc/it

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/scribus/it" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/doc/it/about1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/about2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/bugreport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/cli.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/cms.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/cms2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/cms3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/codingstandards.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color6.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color7.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color7a.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color7b.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color7c.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/color8.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/colorwheel.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/config.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/contributions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/developers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/doccopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/docinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/documentation.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/download.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/EditingShapes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/editorial.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/faq1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/faq3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/fileproblems.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/fonts1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/fonts2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/gettexthowto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/gsview.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/hyphenator.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importbitmap1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importhints.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importhints1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importhints2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importhints3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/importhints4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/index.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install-dpkg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/install5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/intro.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/irc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/keys.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/layers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/lipsum.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/mailing_lists.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/moncal.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/mouse.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/multiple_transform.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/otherinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pagenumber.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pagetemplate1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdf_form.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdfexport1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdfexport2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdfexport3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdfexport4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdflavor.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/pdfx3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/plugin_howto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/print1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/print2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/print3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/print4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/psd.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/qsg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/readme-macosx.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/readme-os2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/readme-win32.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/readme.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/releases.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/renderframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/resources.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scribus-svg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scribuscopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scribusfileformat.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripter-extensions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripter-faq.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripter1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-color.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-constants.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-dialogs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-doc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-extensions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-font.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-getobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-ImageExport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-layer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-manobj.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-object.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-page.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-PDFfile.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-Printer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-select.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-setobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi-textframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/scripterapi.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/settings1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/short-words.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/specs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox12.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox13.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox14.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox15.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox16.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox17.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox18.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox19.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox6.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox7.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox8.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/toolbox9.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/topten.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/translation_howto.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/tutorials.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/workspace1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwFill.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwFrames.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwImages.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwLines.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwRenderframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwShapes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwStyles.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/WwText.html"
    "/Users/vox/Scribus/ScribusCTL/doc/it/menu.xml"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/doc/it/images/cmake_install.cmake")

endif()

