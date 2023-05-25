# Install script for directory: /home/szybet/kdesrc/frameworks/kirigami/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kirigami/src/libkirigami/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/kirigami/src/scenegraph/shaders6/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE RENAME "qmldir" FILES "/home/szybet/kdesrc/build/frameworks/kirigami/src/KirigamiPlugin_qmldir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so"
         RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE SHARED_LIBRARY FILES "/home/szybet/kdesrc/build/frameworks/kirigami/bin/libKirigamiPlugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so"
         OLD_RPATH "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib:/home/szybet/kdesrc/build/frameworks/kirigami/bin::"
         NEW_RPATH "/mnt/HDD/Project/Public/okulartry/okular-things/lib:/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/libKirigamiPlugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Action.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractApplicationWindow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ToolBarApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ApplicationWindow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/BasicListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/OverlayDrawer.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ContextDrawer.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/GlobalDrawer.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Heading.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Separator.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/PageRow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Label.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/OverlaySheet.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Page.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ScrollablePage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/SwipeListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractItemViewHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ItemViewHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractApplicationItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ApplicationItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/FormLayout.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractCard.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Card.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/CardsListView.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/CardsGridView.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/CardsLayout.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/InlineMessage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ListItemDragHandle.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ActionToolBar.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AboutPage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/LinkButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/UrlButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ActionTextField.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/SearchField.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/PasswordField.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ListSectionHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/PagePoolAction.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/ShadowedImage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/PlaceholderMessage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/RouterWindow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Avatar.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/SwipeNavigator.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/FlexColumn.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/CheckableListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Hero.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/TabViewLayout.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PageTab.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/settingscomponents" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/settingscomponents/CategorizedSettings.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/settingscomponents" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/settingscomponents/SettingAction.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AboutItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/NavigationTabBar.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/NavigationTabButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Dialog.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/MenuDialog.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/PromptDialog.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/AbstractChip.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/Chip.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/LoadingPlaceholder.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/SelectableLabel.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/ActionButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/ActionIconGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/ActionMenuItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/ActionsMenu.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/BannerImage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/CardsGridViewPrivate.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/ContextDrawerActionItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/CornerShadow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/DefaultCardBackground.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/DefaultChipBackground.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/DefaultListItemBackground.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/DefaultPageTitleDelegate.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/EdgeShadow.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/GlobalDrawerActionItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/PageActionPropertyGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/PrivateActionToolButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/SwipeItemEventFilter.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/AbstractPageHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/BreadcrumbControl.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/PageRowGlobalToolBarStyleGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/PageRowGlobalToolBarUI.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/TabBarControl.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/TitlesPageHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/private/globaltoolbar" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/private/globaltoolbar/ToolBarPageHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PrivateSwipeHighlight.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PrivateSwipeProgress.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PrivateSwipeStack.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PrivateSwipeTab.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/PrivateSwipeTabBar.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/swipenavigator/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/swipenavigator/templates/PageTab.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/AbstractApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/AbstractCard.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/AbstractChip.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/AbstractListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/ApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/InlineMessage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/OverlayDrawer.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/OverlaySheet.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/SingletonHeaderSizeGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/SwipeListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/qmldir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/BackButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/BorderPropertiesGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/ContextIcon.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/ForwardButton.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/GenericDrawerIcon.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/IconPropertiesGroup.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/MenuIcon.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/templates/private" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/controls/templates/private/PassiveNotificationsManager.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/Material" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/Material/AbstractListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/Material" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/Material/InlineMessage.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/Material" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/Material/Label.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/Material" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/Material/SwipeListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/Material" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/Material/Theme.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/org.kde.desktop" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/org.kde.desktop/AbstractApplicationHeader.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/org.kde.desktop" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/org.kde.desktop/AbstractListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/org.kde.desktop" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/org.kde.desktop/SwipeListItem.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2/styles/org.kde.desktop" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/styles/org.kde.desktop/Theme.qml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "kirigami2" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qml/org/kde/kirigami.2" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/kirigami/src/plugins.qmltypes")
endif()

