#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Completion" for configuration "Debug"
set_property(TARGET KF5::Completion APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Completion PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::ConfigCore;KF5::ConfigGui;KF5::WidgetsAddons"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Completion.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Completion.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Completion )
list(APPEND _cmake_import_check_files_for_KF5::Completion "${_IMPORT_PREFIX}/lib/libKF5Completion.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
