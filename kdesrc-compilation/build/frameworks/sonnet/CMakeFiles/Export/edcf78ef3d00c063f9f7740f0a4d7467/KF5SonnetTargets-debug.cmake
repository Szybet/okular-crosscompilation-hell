#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::SonnetCore" for configuration "Debug"
set_property(TARGET KF5::SonnetCore APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::SonnetCore PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5SonnetCore.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5SonnetCore.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::SonnetCore )
list(APPEND _cmake_import_check_files_for_KF5::SonnetCore "${_IMPORT_PREFIX}/lib/libKF5SonnetCore.so.5.107.0" )

# Import target "KF5::SonnetUi" for configuration "Debug"
set_property(TARGET KF5::SonnetUi APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::SonnetUi PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::SonnetCore"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5SonnetUi.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5SonnetUi.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::SonnetUi )
list(APPEND _cmake_import_check_files_for_KF5::SonnetUi "${_IMPORT_PREFIX}/lib/libKF5SonnetUi.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
