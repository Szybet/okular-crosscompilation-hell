#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::ConfigCore" for configuration "Debug"
set_property(TARGET KF5::ConfigCore APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::ConfigCore PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::DBus"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5ConfigCore.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5ConfigCore.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::ConfigCore )
list(APPEND _cmake_import_check_files_for_KF5::ConfigCore "${_IMPORT_PREFIX}/lib/libKF5ConfigCore.so.5.107.0" )

# Import target "KF5::ConfigGui" for configuration "Debug"
set_property(TARGET KF5::ConfigGui APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::ConfigGui PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5ConfigGui.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5ConfigGui.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::ConfigGui )
list(APPEND _cmake_import_check_files_for_KF5::ConfigGui "${_IMPORT_PREFIX}/lib/libKF5ConfigGui.so.5.107.0" )

# Import target "KF5::ConfigQml" for configuration "Debug"
set_property(TARGET KF5::ConfigQml APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::ConfigQml PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5ConfigQml.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5ConfigQml.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::ConfigQml )
list(APPEND _cmake_import_check_files_for_KF5::ConfigQml "${_IMPORT_PREFIX}/lib/libKF5ConfigQml.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
