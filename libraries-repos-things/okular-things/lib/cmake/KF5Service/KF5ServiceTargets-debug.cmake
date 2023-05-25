#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Service" for configuration "Debug"
set_property(TARGET KF5::Service APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Service PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::I18n;Qt5::Xml;KF5::DBusAddons"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Service.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Service.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Service )
list(APPEND _cmake_import_check_files_for_KF5::Service "${_IMPORT_PREFIX}/lib/libKF5Service.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
