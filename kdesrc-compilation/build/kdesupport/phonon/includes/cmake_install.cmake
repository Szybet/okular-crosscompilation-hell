# Install script for directory: /home/szybet/kdesrc/kdesupport/phonon/includes

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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
  set(CMAKE_CROSSCOMPILING "ON")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/phonon" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AbstractAudioOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AbstractMediaStream"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AbstractVideoOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AddonInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioCaptureDevice"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioCaptureDeviceModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioChannelDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioChannelDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioDataOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutputDevice"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutputDeviceModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutputInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutputInterface40"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AudioOutputInterface42"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/AvCapture"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/BackendCapabilities"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/BackendInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/Effect"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/EffectDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/EffectDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/EffectInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/EffectParameter"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/EffectWidget"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/Global"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/GlobalDescriptionContainer"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/MediaController"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/MediaNode"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/MediaObject"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/MediaObjectInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/MediaSource"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/Mrl"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/ObjectDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/ObjectDescriptionData"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/ObjectDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/ObjectDescriptionModelData"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/Path"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/PlatformPlugin"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/SeekSlider"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/StreamInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/SubtitleDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/SubtitleDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoCaptureDevice"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoCaptureDeviceModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoPlayer"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoWidget"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoWidgetInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoWidgetInterface44"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VideoWidgetInterfaceLatest"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VolumeFaderEffect"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VolumeFaderInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/phonon/VolumeSlider"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/KDE/Phonon" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AbstractAudioOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AbstractMediaStream"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AbstractVideoOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AddonInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioDevice"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioDeviceEnumerator"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioOutputDevice"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioOutputDeviceModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/AudioOutputInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/BackendCapabilities"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/BackendInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Effect"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/EffectDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/EffectDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/EffectInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/EffectParameter"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/EffectWidget"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Global"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/MediaController"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/MediaNode"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/MediaObject"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/MediaObjectInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/MediaSource"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/ObjectDescription"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/ObjectDescriptionModel"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Path"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/PlatformPlugin"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/SeekSlider"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/StreamInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VideoPlayer"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VideoWidget"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VideoWidgetInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VolumeFaderEffect"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VolumeFaderInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/VolumeSlider"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/KDE/Phonon/Experimental" TYPE FILE FILES
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/AbstractVideoDataOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/AudioDataOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/SnapshotInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/VideoDataOutput"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/VideoDataOutputInterface"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/VideoFrame"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/VideoFrame2"
    "/home/szybet/kdesrc/kdesupport/phonon/includes/old/Phonon/Experimental/Visualization"
    )
endif()

