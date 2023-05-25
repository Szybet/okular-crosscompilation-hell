#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::kauth-policy-gen" for configuration "Debug"
set_property(TARGET KF5::kauth-policy-gen APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::kauth-policy-gen PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libexec/kauth/kauth-policy-gen"
  )

list(APPEND _cmake_import_check_targets KF5::kauth-policy-gen )
list(APPEND _cmake_import_check_files_for_KF5::kauth-policy-gen "${_IMPORT_PREFIX}/lib/libexec/kauth/kauth-policy-gen" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
