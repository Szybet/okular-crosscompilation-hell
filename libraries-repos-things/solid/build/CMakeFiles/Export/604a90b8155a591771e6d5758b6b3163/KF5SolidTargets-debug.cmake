#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Solid" for configuration "Debug"
set_property(TARGET KF5::Solid APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Solid PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Xml;Qt5::Gui;Qt5::DBus"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Solid.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5Solid.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::Solid )
list(APPEND _cmake_import_check_files_for_KF5::Solid "${_IMPORT_PREFIX}/lib/libKF5Solid.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
