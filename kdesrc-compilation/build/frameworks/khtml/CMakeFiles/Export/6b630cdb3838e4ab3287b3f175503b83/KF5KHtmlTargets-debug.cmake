#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::KHtml" for configuration "Debug"
set_property(TARGET KF5::KHtml APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KHtml PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Phonon::phonon4qt5;Phonon::phonon4qt5experimental;Qt5::PrintSupport;KF5::Archive;KF5::SonnetCore;KF5::WidgetsAddons;KF5::WindowSystem;KF5::Wallet;KF5::IconThemes;KF5::Notifications;KF5::Bookmarks;KF5::KIOWidgets;KF5::GlobalAccel"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KHtml.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KHtml.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KHtml )
list(APPEND _cmake_import_check_files_for_KF5::KHtml "${_IMPORT_PREFIX}/lib/libKF5KHtml.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
