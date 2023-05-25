# KExiv2Config.cmake provides information about the installed KExiv2 library.
# It can be used directly from CMake via find_package(KExiv2 NO_MODULE)
#
# The following CMake variables are provided:
#   KExiv2_VERSION_MAJOR - the major version number of KExiv2
#   KExiv2_VERSION_MINOR - the minor version number of KExiv2
#   KExiv2_VERSION_PATCH - the patch version number of KExiv2
#   KExiv2_INCLUDE_DIRS  - the include directories to use
#
# Additionally, the following imported library targets are created, which may be used directly
# with target_link_libraries():
#   KF5::KExiv2 - the kexiv2 library


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was KF5KExiv2Config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

include(CMakeFindDependencyMacro)
find_dependency(Qt5Core 5.15.0)
find_dependency(Qt5Gui 5.15.0)

include("${CMAKE_CURRENT_LIST_DIR}/KF5KExiv2Targets.cmake")
