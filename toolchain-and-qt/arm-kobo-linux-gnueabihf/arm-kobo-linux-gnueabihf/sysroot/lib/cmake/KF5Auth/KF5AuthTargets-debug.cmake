#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::AuthCore" for configuration "Debug"
set_property(TARGET KF5::AuthCore APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::AuthCore PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::DBus"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5AuthCore.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5AuthCore.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::AuthCore )
list(APPEND _cmake_import_check_files_for_KF5::AuthCore "${_IMPORT_PREFIX}/lib/libKF5AuthCore.so.5.107.0" )

# Import target "KF5::Auth" for configuration "Debug"
set_property(TARGET KF5::Auth APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Auth PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Widgets"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Auth.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Auth.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Auth )
list(APPEND _cmake_import_check_files_for_KF5::Auth "${_IMPORT_PREFIX}/lib/libKF5Auth.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
