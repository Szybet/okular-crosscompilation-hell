#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Purpose" for configuration "Debug"
set_property(TARGET KF5::Purpose APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Purpose PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::DBus;Qt5::Network;KF5::ConfigCore"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Purpose.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Purpose.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Purpose )
list(APPEND _cmake_import_check_files_for_KF5::Purpose "${_IMPORT_PREFIX}/lib/libKF5Purpose.so.5.107.0" )

# Import target "KF5::PurposeWidgets" for configuration "Debug"
set_property(TARGET KF5::PurposeWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::PurposeWidgets PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Qml;KF5::I18n"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5PurposeWidgets.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5PurposeWidgets.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::PurposeWidgets )
list(APPEND _cmake_import_check_files_for_KF5::PurposeWidgets "${_IMPORT_PREFIX}/lib/libKF5PurposeWidgets.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
