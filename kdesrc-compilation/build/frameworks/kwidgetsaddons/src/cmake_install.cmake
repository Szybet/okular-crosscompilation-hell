# Install script for directory: /home/szybet/kdesrc/frameworks/kwidgetsaddons/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/Public/okulartry/okular-things")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "ON")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/bin/libKF5WidgetsAddons.so.5.107.0"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/bin/libKF5WidgetsAddons.so.5"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so.5.107.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so.5"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/bin/libKF5WidgetsAddons.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libKF5WidgetsAddons.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/KF5/KWidgetsAddons" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KAcceleratorManager"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KAnimatedButton"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KBusyIndicatorWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KCharSelect"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KCollapsibleGroupBox"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KColorButton"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KColumnResizer"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDateComboBox"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDatePicker"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDatePickerPopup"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDateTimeEdit"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDragWidgetDecorator"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KDualAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KFontAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KFontChooser"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KFontChooserDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KFontSizeAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KGuiItem"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KLed"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMessageBox"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMessageBoxDontAskAgainInterface"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMultiTabBar"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMultiTabBarButton"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMultiTabBarTab"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KNewPasswordWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPopupFrame"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KSelectAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KStandardGuiItem"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KTimeComboBox"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KUrlLabel"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KCapacityBar"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KFontRequester"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPasswordDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KRuler"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KRecentFilesMenu"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KSelector"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KGradientSelector"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KTitleWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KXYSelector"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KSeparator"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KSqueezedTextLabel"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToggleAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToggleFullScreenAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KViewStateSerializer"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KViewStateMaintainerBase"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KEditListWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KCursor"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KRatingPainter"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KRatingWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KActionSelector"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KColorCombo"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KActionMenu"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToolBarLabelAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToolBarPopupAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToolBarSpacerAction"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageModel"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageView"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageWidgetModel"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPageWidgetItem"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KAssistantDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMessageWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMessageDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KNewPasswordDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/LineEditUrlDropEventFilter"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPasswordLineEdit"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPixmapSequence"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPixmapSequenceOverlayPainter"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPixmapSequenceWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPixmapRegionSelectorDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KPixmapRegionSelectorWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMimeTypeChooser"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMimeTypeChooserDialog"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMimeTypeEditor"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KMessageBoxNotifyInterface"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KSplitterCollapserButton"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KStyleExtensions"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KToolTipWidget"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KTwoFingerTap"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/KTwoFingerSwipe"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kacceleratormanager.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kanimatedbutton.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kbusyindicatorwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcharselect.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcollapsiblegroupbox.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcolorbutton.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcolumnresizer.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdatecombobox.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdatepicker.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdatepickerpopup.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdatetimeedit.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdragwidgetdecorator.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kdualaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kfontaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kfontchooser.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kfontchooserdialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kfontsizeaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kguiitem.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kled.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmessagebox.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmessageboxdontaskagaininterface.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmultitabbar.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/knewpasswordwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpopupframe.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kselectaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kstandardguiitem.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktimecombobox.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kurllabel.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcapacitybar.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kfontrequester.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpassworddialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kruler.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/krecentfilesmenu.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kselector.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktitlewidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kxyselector.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kseparator.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ksqueezedtextlabel.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktoggleaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktogglefullscreenaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kviewstateserializer.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kviewstatemaintainerbase.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/keditlistwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcursor.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kratingpainter.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kratingwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kactionselector.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcolorcombo.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kactionmenu.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktoolbarlabelaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktoolbarpopupaction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktoolbarspaceraction.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpagedialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpagemodel.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpageview.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpagewidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpagewidgetmodel.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kassistantdialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmessagewidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmessagedialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/knewpassworddialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/lineediturldropeventfilter.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpasswordlineedit.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpixmapsequence.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpixmapsequenceoverlaypainter.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpixmapsequencewidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpixmapregionselectordialog.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kpixmapregionselectorwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmimetypechooser.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmimetypeeditor.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kmessageboxnotifyinterface.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ksplittercollapserbutton.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kstyleextensions.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktooltipwidget.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktwofingertap.h"
    "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/ktwofingerswipe.h"
    "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/kwidgetsaddons_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kf5/kcharselect" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kwidgetsaddons/src/kcharselect-data")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qlogging-categories5" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/kwidgetsaddons.categories")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "KWidgetsAddons" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/mkspecs/modules" TYPE FILE FILES "/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/src/qt_KWidgetsAddons.pri")
endif()

