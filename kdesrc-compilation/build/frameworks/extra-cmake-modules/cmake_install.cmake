# Install script for directory: /home/szybet/kdesrc/frameworks/extra-cmake-modules

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/mnt/HDD/Project/Public/okulartry/okular-things")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/szybet/kdesrc/build/frameworks/extra-cmake-modules/docs/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/modules" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/CheckAtomic.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMAddAppIcon.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMAddQch.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMAddQtDesignerPlugin.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMAddTests.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMCheckOutboundLicense.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMConfiguredInstall.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMCoverageOption.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMCreateQmFromPoFiles.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMDeprecationSettings.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMEnableSanitizers.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMFindModuleHelpers.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMFindQmlModule.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMFindQmlModule.cmake.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGenerateDBusServiceFile.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGenerateExportHeader.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGenerateHeaders.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGeneratePkgConfigFile.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGeneratePriFile.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMGenerateQmlTypes.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMInstallIcons.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMMarkAsTest.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMMarkNonGuiExecutable.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMOptionalAddSubdirectory.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMPackageConfigHelpers.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMPoQmTools.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQMLModules.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQchDoxygen.config.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQchDoxygenLayout.xml"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmLoader.cpp.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmlModule.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmlModule.cpp.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmlModule.cpp.in.license"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmlModule.h.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQmlModule.h.in.license"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.cpp.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.h.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQueryQmake.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMQueryQt.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMSetupQtPluginMacroNames.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMSetupVersion.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMSourceVersionControl.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMUninstallTarget.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMUseFindModules.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMVersionHeader.h.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ECMWinResolveSymlinks.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/QtVersionOption.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/check-outbound-license.py"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/modules/ecm_uninstall.cmake.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/test-modules" TYPE FILE FILES "/home/szybet/kdesrc/frameworks/extra-cmake-modules/test-modules/test_execute_and_compare.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/kde-modules" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDECMakeSettings.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEClangFormat.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDECompilerSettings.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEFrameworkCompilerLegacySettings.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEFrameworkCompilerSettings.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEGitCommitHooks.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEInstallDirs.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEInstallDirs5.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEInstallDirs6.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEInstallDirsCommon.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEMetaInfoPlatformCheck.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDEPackageAppTemplates.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/KDESetupPrefixScript.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/appstreamtest.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/clang-format.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/prefix.sh.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/prefix.sh.fish.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/kde-modules/kde-git-commit-hooks" TYPE PROGRAM FILES
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/kde-git-commit-hooks/clang-format.sh"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/kde-modules/kde-git-commit-hooks/pre-commit.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/find-modules" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/ECMFindModuleHelpersStub.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/Find7z.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindCanberra.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindEGL.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindGLIB2.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindGperf.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindGradle.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindIcoTool.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindInotify.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindIsoCodes.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindKF5.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindLibExiv2.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindLibGit2.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindLibMount.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindLibcap.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindOpenEXR.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindPhoneNumber.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindPoppler.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindPulseAudio.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindPythonModuleGeneration.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindQHelpGenerator.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindQtWaylandScanner.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindReuseTool.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindSasl2.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindSeccomp.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindSharedMimeInfo.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindTaglib.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindUDev.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindWayland.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindWaylandProtocols.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindWaylandScanner.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindX11_XCB.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/FindXCB.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/Findepoxy.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/Findgzip.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/GeneratePythonBindingUmbrellaModule.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/Qt5Ruleset.py"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/local.properties.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/rules_engine.py"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/run-sip.py"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/settings.gradle.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/find-modules/sip_generator.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/toolchain" TYPE FILE FILES
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/Android.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/ECMAndroidDeployQt.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/deployment-file-qt514.json.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/deployment-file.json.in"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/generate-fastlane-metadata.py"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/hasMainSymbol.cmake"
    "/home/szybet/kdesrc/frameworks/extra-cmake-modules/toolchain/specifydependencies.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/cmake" TYPE FILE FILES
    "/home/szybet/kdesrc/build/frameworks/extra-cmake-modules/ECMConfig.cmake"
    "/home/szybet/kdesrc/build/frameworks/extra-cmake-modules/ECMConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/szybet/kdesrc/build/frameworks/extra-cmake-modules/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
