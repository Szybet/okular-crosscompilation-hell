#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Codecs" for configuration "Debug"
set_property(TARGET KF5::Codecs APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Codecs PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Codecs.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Codecs.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Codecs )
list(APPEND _cmake_import_check_files_for_KF5::Codecs "${_IMPORT_PREFIX}/lib/libKF5Codecs.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
