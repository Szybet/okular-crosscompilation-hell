#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "exiv2lib" for configuration "Release"
set_property(TARGET exiv2lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(exiv2lib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libexiv2.so.1.0.0.9"
  IMPORTED_SONAME_RELEASE "libexiv2.so.30"
  )

list(APPEND _cmake_import_check_targets exiv2lib )
list(APPEND _cmake_import_check_files_for_exiv2lib "${_IMPORT_PREFIX}/lib/libexiv2.so.1.0.0.9" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
