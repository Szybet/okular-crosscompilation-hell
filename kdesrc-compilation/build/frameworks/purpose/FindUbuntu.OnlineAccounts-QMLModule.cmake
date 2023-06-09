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

execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "Ubuntu.OnlineAccounts" "0.1" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)

if(ExitCode EQUAL 0)
    set(Ubuntu.OnlineAccounts-QMLModule_FOUND TRUE)
    set(Ubuntu.OnlineAccounts-QMLModule_VERSION "${PACKAGE_FIND_VERSION}")
else()
    message(STATUS "qmlplugindump failed for Ubuntu.OnlineAccounts.")
    set(Ubuntu.OnlineAccounts-QMLModule_FOUND FALSE)
endif()

find_package_handle_standard_args(Ubuntu.OnlineAccounts-QMLModule
    FOUND_VAR
        Ubuntu.OnlineAccounts-QMLModule_FOUND
    REQUIRED_VARS
        Ubuntu.OnlineAccounts-QMLModule_FOUND
    VERSION_VAR
        Ubuntu.OnlineAccounts-QMLModule_VERSION
    HANDLE_COMPONENTS
)


