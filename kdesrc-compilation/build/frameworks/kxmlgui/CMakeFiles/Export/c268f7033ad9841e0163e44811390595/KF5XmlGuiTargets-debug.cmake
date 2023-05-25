#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::XmlGui" for configuration "Debug"
set_property(TARGET KF5::XmlGui APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::XmlGui PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::GlobalAccel;Qt5::Network;Qt5::PrintSupport;KF5::CoreAddons;KF5::GuiAddons;KF5::WidgetsAddons;KF5::ItemViews;KF5::I18n;KF5::IconThemes"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5XmlGui.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5XmlGui.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::XmlGui )
list(APPEND _cmake_import_check_files_for_KF5::XmlGui "${_IMPORT_PREFIX}/lib/libKF5XmlGui.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
