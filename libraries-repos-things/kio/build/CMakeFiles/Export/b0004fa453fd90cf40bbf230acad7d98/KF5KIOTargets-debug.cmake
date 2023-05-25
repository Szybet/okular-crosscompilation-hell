#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::KIOCore" for configuration "Debug"
set_property(TARGET KF5::KIOCore APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KIOCore PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Xml;KF5::ConfigCore;KF5::I18n;KF5::Crash;KF5::DBusAddons;KF5::AuthCore"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KIOCore.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KIOCore.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KIOCore )
list(APPEND _cmake_import_check_files_for_KF5::KIOCore "${_IMPORT_PREFIX}/lib/libKF5KIOCore.so.5.107.0" )

# Import target "KF5::KIONTLM" for configuration "Debug"
set_property(TARGET KF5::KIONTLM APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KIONTLM PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KIONTLM.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KIONTLM.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KIONTLM )
list(APPEND _cmake_import_check_files_for_KF5::KIONTLM "${_IMPORT_PREFIX}/lib/libKF5KIONTLM.so.5.107.0" )

# Import target "KF5::KIOGui" for configuration "Debug"
set_property(TARGET KF5::KIOGui APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KIOGui PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::I18n"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KIOGui.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KIOGui.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KIOGui )
list(APPEND _cmake_import_check_files_for_KF5::KIOGui "${_IMPORT_PREFIX}/lib/libKF5KIOGui.so.5.107.0" )

# Import target "KF5::KIOWidgets" for configuration "Debug"
set_property(TARGET KF5::KIOWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KIOWidgets PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Concurrent;KF5::I18n;KF5::GuiAddons;KF5::IconThemes;KF5::WindowSystem;KF5::ConfigWidgets;Qt5::DBus"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KIOWidgets.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KIOWidgets.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KIOWidgets )
list(APPEND _cmake_import_check_files_for_KF5::KIOWidgets "${_IMPORT_PREFIX}/lib/libKF5KIOWidgets.so.5.107.0" )

# Import target "KF5::KIOFileWidgets" for configuration "Debug"
set_property(TARGET KF5::KIOFileWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::KIOFileWidgets PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "KF5::GuiAddons;KF5::IconThemes;KF5::I18n"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0"
  IMPORTED_SONAME_DEBUG "libKF5KIOFileWidgets.so.5"
  )

list(APPEND _cmake_import_check_targets KF5::KIOFileWidgets )
list(APPEND _cmake_import_check_files_for_KF5::KIOFileWidgets "${_IMPORT_PREFIX}/lib/libKF5KIOFileWidgets.so.5.107.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
