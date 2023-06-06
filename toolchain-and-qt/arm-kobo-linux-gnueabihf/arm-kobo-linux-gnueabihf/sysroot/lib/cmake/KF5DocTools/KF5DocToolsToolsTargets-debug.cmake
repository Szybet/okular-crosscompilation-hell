#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::meinproc5" for configuration "Debug"
set_property(TARGET KF5::meinproc5 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::meinproc5 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/meinproc5"
  )

list(APPEND _cmake_import_check_targets KF5::meinproc5 )
list(APPEND _cmake_import_check_files_for_KF5::meinproc5 "${_IMPORT_PREFIX}/bin/meinproc5" )

# Import target "KF5::checkXML5" for configuration "Debug"
set_property(TARGET KF5::checkXML5 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::checkXML5 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/checkXML5"
  )

list(APPEND _cmake_import_check_targets KF5::checkXML5 )
list(APPEND _cmake_import_check_files_for_KF5::checkXML5 "${_IMPORT_PREFIX}/bin/checkXML5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
