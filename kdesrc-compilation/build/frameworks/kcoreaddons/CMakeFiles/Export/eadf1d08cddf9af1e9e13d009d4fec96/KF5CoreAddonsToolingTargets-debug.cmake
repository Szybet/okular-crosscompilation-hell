#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::desktoptojson" for configuration "Debug"
set_property(TARGET KF5::desktoptojson APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::desktoptojson PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/desktoptojson"
  )

list(APPEND _cmake_import_check_targets KF5::desktoptojson )
list(APPEND _cmake_import_check_files_for_KF5::desktoptojson "${_IMPORT_PREFIX}/bin/desktoptojson" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
