#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Phonon::phonon4qt5" for configuration "Debug"
set_property(TARGET Phonon::phonon4qt5 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Phonon::phonon4qt5 PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libphonon4qt5.so.4.11.1"
  IMPORTED_SONAME_DEBUG "libphonon4qt5.so.4"
  )

list(APPEND _cmake_import_check_targets Phonon::phonon4qt5 )
list(APPEND _cmake_import_check_files_for_Phonon::phonon4qt5 "${_IMPORT_PREFIX}/lib/libphonon4qt5.so.4.11.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
