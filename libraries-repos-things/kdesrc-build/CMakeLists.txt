cmake_minimum_required(VERSION 3.16)
project(kdesrc-build)

include(FeatureSummary)

# Needed for the docs, but optional. If not found, we will simply
# defer to native CMake handling.
find_package(ECM 5.10.0 NO_MODULE QUIET)

if (ECM_FOUND)
    set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})

    include(KDEInstallDirs)
    include(KDECMakeSettings)
    include(ECMOptionalAddSubdirectory)

    find_package(KF5 5.10.0 COMPONENTS DocTools)

    if(KF5_DocTools_FOUND)
        ecm_optional_add_subdirectory(doc)
    else()
        message(WARNING "Found ECM, but not KF5::DocTools; documentation will not be built")
    endif()
else()
    message(WARNING "Did not find extra-cmake-modules; documentation will not be built and install paths will be guessed based on CMake settings.")
    # ECM now sets KDE_INSTALL_DATADIR to PREFIX/share, try to match
    set(KDE_INSTALL_DATADIR  "${CMAKE_INSTALL_PREFIX}/share" CACHE PATH "The parent directory where applications can install their data")
    set(KDE_INSTALL_BINDIR   "${CMAKE_INSTALL_PREFIX}/bin"  CACHE PATH "The install dir for executables")
    set(KDE_INSTALL_METAINFODIR "${KDE_INSTALL_DATADIR}/metainfo" CACHE PATH "AppStream metadata directory")
endif()
# Added in ECM 5.101.0
if (NOT DEFINED KDE_INSTALL_ZSHAUTOCOMPLETEDIR)
    set(KDE_INSTALL_ZSHAUTOCOMPLETEDIR "${KDE_INSTALL_DATADIR}/zsh/site-functions" CACHE PATH "Zsh functions and autocompletion definitions")
endif()

set(KDESRC_BUILD_INSTALL_MODULES TRUE CACHE BOOL "Controls whether to install the modules that make up the script. Leave enabled unless running straight from source")
set(KDESRC_BUILD_MODULE_INSTALL_PREFIX "${KDE_INSTALL_DATADIR}/kdesrc-build/modules" CACHE PATH "Prefix to install the component Perl modules to. (This is only an option to allow for installing to vendor_perl or similar)")

if (KDESRC_BUILD_INSTALL_MODULES)
    message(STATUS "Installing component modules to ${KDESRC_BUILD_MODULE_INSTALL_PREFIX}")
    install(DIRECTORY modules/
            DESTINATION ${KDESRC_BUILD_MODULE_INSTALL_PREFIX})
endif()

install(PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/kdesrc-build DESTINATION ${KDE_INSTALL_BINDIR})
install(PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/kdesrc-build-setup DESTINATION ${KDE_INSTALL_BINDIR})
install(PROGRAMS ${CMAKE_CURRENT_SOURCE_DIR}/kdesrc-run DESTINATION ${KDE_INSTALL_BINDIR})

install(PROGRAMS
            ${CMAKE_SOURCE_DIR}/sample-kde-env-master.sh
            ${CMAKE_SOURCE_DIR}/sample-xsession.sh
            ${CMAKE_SOURCE_DIR}/custom-qt5-libs-build-include
            ${CMAKE_SOURCE_DIR}/qt5-build-include
            ${CMAKE_SOURCE_DIR}/kf5-applications-build-include
            ${CMAKE_SOURCE_DIR}/kf5-common-options-build-include
            ${CMAKE_SOURCE_DIR}/kf5-extragear-build-include
            ${CMAKE_SOURCE_DIR}/kf5-frameworks-build-include
            ${CMAKE_SOURCE_DIR}/kf5-kdepim-build-include
            ${CMAKE_SOURCE_DIR}/kf5-qt5-build-include
            ${CMAKE_SOURCE_DIR}/kf5-workspace-build-include
            ${CMAKE_SOURCE_DIR}/custom-qt6-libs-build-include
            ${CMAKE_SOURCE_DIR}/qt6-build-include
            ${CMAKE_SOURCE_DIR}/kf6-applications-build-include
            ${CMAKE_SOURCE_DIR}/kf6-common-options-build-include
            ${CMAKE_SOURCE_DIR}/kf6-extragear-build-include
            ${CMAKE_SOURCE_DIR}/kf6-frameworks-build-include
            ${CMAKE_SOURCE_DIR}/kf6-kdepim-build-include
            ${CMAKE_SOURCE_DIR}/kf6-qt6-build-include
            ${CMAKE_SOURCE_DIR}/kf6-workspace-build-include
    DESTINATION ${KDE_INSTALL_DATADIR}/kdesrc-build)

install(FILES org.kde.kdesrc-build.metainfo.xml DESTINATION ${KDE_INSTALL_METAINFODIR})

install(FILES
        completions/zsh/_kdesrc-build_modules
        completions/zsh/_kdesrc-build
        completions/zsh/_kdesrc-run
    DESTINATION ${KDE_INSTALL_ZSHAUTOCOMPLETEDIR})

if (ECM_FOUND)
    feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)
endif()
