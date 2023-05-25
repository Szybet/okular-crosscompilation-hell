#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::GlobalAccel" for configuration "Debug"
set_property(TARGET KF5::GlobalAccel APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::GlobalAccel PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5GlobalAccel.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5GlobalAccel.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::GlobalAccel )
list(APPEND _cmake_import_check_files_for_KF5::GlobalAccel "${_IMPORT_PREFIX}/lib/libKF5GlobalAccel.so.5.107.0" )

# Import target "KF5::GlobalAccelPrivate" for configuration "Debug"
set_property(TARGET KF5::GlobalAccelPrivate APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::GlobalAccelPrivate PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5GlobalAccelPrivate.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5GlobalAccelPrivate.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::GlobalAccelPrivate )
list(APPEND _cmake_import_check_files_for_KF5::GlobalAccelPrivate "${_IMPORT_PREFIX}/lib/libKF5GlobalAccelPrivate.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
