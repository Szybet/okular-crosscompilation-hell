# Install script for directory: /mnt/HDD/Project/Public/okulartry/extra-cmake-modules

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot")
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
  include("/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/tests/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/modules" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/CheckAtomic.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMAddAppIcon.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMAddQch.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMAddQtDesignerPlugin.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMAddTests.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMCheckOutboundLicense.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMConfiguredInstall.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMCoverageOption.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMCreateQmFromPoFiles.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMDeprecationSettings.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMEnableSanitizers.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMFindModuleHelpers.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMFindQmlModule.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMFindQmlModule.cmake.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGenerateDBusServiceFile.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGenerateExportHeader.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGenerateHeaders.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGeneratePkgConfigFile.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGeneratePriFile.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMGenerateQmlTypes.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMInstallIcons.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMMarkAsTest.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMMarkNonGuiExecutable.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMOptionalAddSubdirectory.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMPackageConfigHelpers.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMPoQmTools.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQMLModules.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQchDoxygen.config.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQchDoxygenLayout.xml"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmLoader.cpp.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmlModule.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmlModule.cpp.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmlModule.cpp.in.license"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmlModule.h.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQmlModule.h.in.license"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.cpp.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQtDeclareLoggingCategory.h.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQueryQmake.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMQueryQt.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMSetupQtPluginMacroNames.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMSetupVersion.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMSourceVersionControl.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMUninstallTarget.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMUseFindModules.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMVersionHeader.h.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ECMWinResolveSymlinks.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/QtVersionOption.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/check-outbound-license.py"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/modules/ecm_uninstall.cmake.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/test-modules" TYPE FILE FILES "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/test-modules/test_execute_and_compare.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/kde-modules" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDECMakeSettings.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEClangFormat.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDECompilerSettings.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEFrameworkCompilerLegacySettings.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEFrameworkCompilerSettings.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEGitCommitHooks.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEInstallDirs.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEInstallDirs5.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEInstallDirs6.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEInstallDirsCommon.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEMetaInfoPlatformCheck.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDEPackageAppTemplates.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/KDESetupPrefixScript.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/appstreamtest.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/clang-format.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/prefix.sh.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/prefix.sh.fish.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/kde-modules/kde-git-commit-hooks" TYPE PROGRAM FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/kde-git-commit-hooks/clang-format.sh"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/kde-modules/kde-git-commit-hooks/pre-commit.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/find-modules" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/ECMFindModuleHelpersStub.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/Find7z.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindCanberra.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindEGL.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindGLIB2.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindGperf.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindGradle.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindIcoTool.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindInotify.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindIsoCodes.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindKF5.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindKF6.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindLibExiv2.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindLibGit2.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindLibMount.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindLibcap.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindOpenEXR.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindPhoneNumber.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindPoppler.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindPulseAudio.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindPythonModuleGeneration.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindQHelpGenerator.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindQtWaylandScanner.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindReuseTool.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindSasl2.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindSeccomp.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindSharedMimeInfo.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindTaglib.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindUDev.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindWayland.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindWaylandProtocols.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindWaylandScanner.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindX11_XCB.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/FindXCB.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/Findepoxy.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/Findgzip.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/GeneratePythonBindingUmbrellaModule.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/Qt5Ruleset.py"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/local.properties.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/rules_engine.py"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/run-sip.py"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/settings.gradle.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/find-modules/sip_generator.py"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/toolchain" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/Android.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/ECMAndroidDeployQt.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/deployment-file-qt514.json.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/deployment-file.json.in"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/generate-fastlane-metadata.py"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/hasMainSymbol.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/toolchain/specifydependencies.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ECM/cmake" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/ECMConfig.cmake"
    "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/ECMConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
