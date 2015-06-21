# Install script for directory: /Users/vox/Scribus/ScribusCTL/doc/en

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/scribus/en" TYPE FILE FILES
    "/Users/vox/Scribus/ScribusCTL/doc/en/about1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/about2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/add_colors.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/bugreport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/cli.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/cms.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/cms2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/cms3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/collect4output.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color6.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color7.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color7a.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color7b.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color7c.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color8.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/color_editing.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/colorwheel.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/config.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/contributions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/createlinks.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/developers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/doccopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/docinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/documentation.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/EditingShapes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/editorial.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/faq1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/faq3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/fileproblems.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/fonts1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/fonts2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/gsview.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/help.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/hyphenator.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importbitmap1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importclipart.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importhints.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importhints1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importhints2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importhints3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importhints4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/importoutput.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/index.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/install.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/install1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/install2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/install4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/install5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/intro.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/irc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/keys.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/layers.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/lipsum.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/mailing_lists.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/moncal.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/mouse.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/multiple_transform.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/otherinfo.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pagenumber.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pagetemplate1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdf_form.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfexport1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfexport2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfexport3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfexport4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfexport_image.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdflavor.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/pdfx3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/print1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/print2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/print3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/print4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/psd.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/qsg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/readme-haiku.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/readme-macosx.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/readme-os2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/readme-win32.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/readme.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/releases.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/renderframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/resources.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scribus-svg.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scribuscopyright.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripter-extensions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripter-faq.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripter1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-color.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-constants.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-dialogs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-doc.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-extensions.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-font.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-getobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-ImageExport.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-layer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-manobj.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-object.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-page.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-PDFfile.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-Printer.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-select.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-setobjprop.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi-textframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/scripterapi.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/settings1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/short-words.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/specs.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox12.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox13.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox14.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox15.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox16.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox17.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox18.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox19.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox2.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox20.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox3.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox4.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox5.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox6.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox7.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox8.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/toolbox9.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/topten.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/tutorials.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/workspace1.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwFill.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwFrames.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwImages.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwLines.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwRenderframes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwShapes.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwStyles.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/WwText.html"
    "/Users/vox/Scribus/ScribusCTL/doc/en/menu.xml"
    "/Users/vox/Scribus/ScribusCTL/doc/en/manual.css"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/vox/Scribus/ScribusCTL/build/doc/en/images/cmake_install.cmake")
  include("/Users/vox/Scribus/ScribusCTL/build/doc/en/tutorials/cmake_install.cmake")

endif()

