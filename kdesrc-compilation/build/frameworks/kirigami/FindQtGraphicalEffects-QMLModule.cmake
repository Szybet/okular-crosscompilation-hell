#=============================================================================
# SPDX-FileCopyrightText: 2015 Aleix Pol Gonzalez <aleixpol@blue-systems.com>
#
# SPDX-License-Identifier: BSD-3-Clause
#=============================================================================

include(FindPackageHandleStandardArgs)
include("${ECM_MODULE_DIR}/QtVersionOption.cmake")

if (QT_MAJOR_VERSION EQUAL "5")
    include("${ECM_MODULE_DIR}/ECMQueryQt.cmake")
    ecm_query_qt(qt_binaries_dir QT_HOST_BINS)
    find_program(QMLPLUGINDUMP_PROGRAM NAMES qmlplugindump HINTS ${qt_binaries_dir})
elseif (QT_MAJOR_VERSION EQUAL "6")
    find_package(Qt6 COMPONENTS QmlTools REQUIRED)
    get_target_property(QMLPLUGINDUMP_PROGRAM Qt6::qmlplugindump LOCATION)
endif()

if(NOT QMLPLUGINDUMP_PROGRAM)
    message(WARNING "Could not find qmlplugindump. It is necessary to look up qml module dependencies.")
endif()

execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "QtGraphicalEffects" "1.0" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)

if(ExitCode EQUAL 0)
    set(QtGraphicalEffects-QMLModule_FOUND TRUE)
    set(QtGraphicalEffects-QMLModule_VERSION "${PACKAGE_FIND_VERSION}")
else()
    message(STATUS "qmlplugindump failed for QtGraphicalEffects.")
    set(QtGraphicalEffects-QMLModule_FOUND FALSE)
endif()

find_package_handle_standard_args(QtGraphicalEffects-QMLModule
    FOUND_VAR
        QtGraphicalEffects-QMLModule_FOUND
    REQUIRED_VARS
        QtGraphicalEffects-QMLModule_FOUND
    VERSION_VAR
        QtGraphicalEffects-QMLModule_VERSION
    HANDLE_COMPONENTS
)


