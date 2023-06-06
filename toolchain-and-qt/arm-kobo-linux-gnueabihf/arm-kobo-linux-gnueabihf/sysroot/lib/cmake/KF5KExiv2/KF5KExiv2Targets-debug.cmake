#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::KExiv2" for configuration "Debug"
set_property(TARGET KF5::KExiv2 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KExiv2 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KExiv2.so.5.0.0"
  IMPORTED_SONAME_DEBUG "libKF5KExiv2.so.15.0.0"
  )

list(APPEND _cmake_import_check_targets KF5::KExiv2 )
list(APPEND _cmake_import_check_files_for_KF5::KExiv2 "${_IMPORT_PREFIX}/lib/libKF5KExiv2.so.5.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
