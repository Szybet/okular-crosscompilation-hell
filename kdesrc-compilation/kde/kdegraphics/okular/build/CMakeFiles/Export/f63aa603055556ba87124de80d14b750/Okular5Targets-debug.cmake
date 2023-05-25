#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Okular::Core" for configuration "Debug"
set_property(TARGET Okular::Core APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(Okular::Core PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::Archive;KF5::KIOCore;KF5::KIOWidgets;KF5::I18n;KF5::ThreadWeaver;KF5::Bookmarks;Phonon::phonon4qt5;Qt5::Svg;KF5::JS;KF5::JSApi"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libOkular5Core.so.10.0.0"
  IMPORTED_SONAME_DEBUG "libOkular5Core.so.10"
  )

list(APPEND _cmake_import_check_targets Okular::Core )
list(APPEND _cmake_import_check_files_for_Okular::Core "${_IMPORT_PREFIX}/lib/libOkular5Core.so.10.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
