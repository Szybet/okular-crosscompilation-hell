#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qmobipocket" for configuration "Debug"
set_property(TARGET qmobipocket APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(qmobipocket PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libqmobipocket.so.2.1.0"
  IMPORTED_SONAME_DEBUG "libqmobipocket.so.2"
  )

list(APPEND _cmake_import_check_targets qmobipocket )
list(APPEND _cmake_import_check_files_for_qmobipocket "${_IMPORT_PREFIX}/lib/libqmobipocket.so.2.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
