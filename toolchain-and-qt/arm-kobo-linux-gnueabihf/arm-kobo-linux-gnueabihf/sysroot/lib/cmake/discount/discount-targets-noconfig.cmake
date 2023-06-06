#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "discount::libmarkdown" for configuration ""
set_property(TARGET discount::libmarkdown APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(discount::libmarkdown PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmarkdown.a"
  )

list(APPEND _cmake_import_check_targets discount::libmarkdown )
list(APPEND _cmake_import_check_files_for_discount::libmarkdown "${_IMPORT_PREFIX}/lib/libmarkdown.a" )

# Import target "discount::markdown" for configuration ""
set_property(TARGET discount::markdown APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(discount::markdown PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/markdown"
  )

list(APPEND _cmake_import_check_targets discount::markdown )
list(APPEND _cmake_import_check_files_for_discount::markdown "${_IMPORT_PREFIX}/bin/markdown" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
