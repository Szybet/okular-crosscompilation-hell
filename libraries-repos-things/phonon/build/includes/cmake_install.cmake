# Install script for directory: /mnt/HDD/Project/Public/okulartry/phonon/includes

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
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AbstractAudioOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AbstractMediaStream"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AbstractVideoOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AddonInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioCaptureDevice"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioCaptureDeviceModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioChannelDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioChannelDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioDataOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutputDevice"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutputDeviceModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutputInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutputInterface40"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AudioOutputInterface42"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/AvCapture"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/BackendCapabilities"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/BackendInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/Effect"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/EffectDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/EffectDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/EffectInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/EffectParameter"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/EffectWidget"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/Global"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/GlobalDescriptionContainer"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/MediaController"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/MediaNode"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/MediaObject"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/MediaObjectInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/MediaSource"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/Mrl"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/ObjectDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/ObjectDescriptionData"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/ObjectDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/ObjectDescriptionModelData"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/Path"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/PlatformPlugin"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/SeekSlider"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/StreamInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/SubtitleDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/SubtitleDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoCaptureDevice"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoCaptureDeviceModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoPlayer"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoWidget"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoWidgetInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoWidgetInterface44"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VideoWidgetInterfaceLatest"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VolumeFaderEffect"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VolumeFaderInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/phonon/VolumeSlider"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/KDE/Phonon" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AbstractAudioOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AbstractMediaStream"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AbstractVideoOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AddonInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioDevice"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioDeviceEnumerator"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioOutputDevice"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioOutputDeviceModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/AudioOutputInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/BackendCapabilities"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/BackendInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Effect"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/EffectDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/EffectDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/EffectInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/EffectParameter"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/EffectWidget"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Global"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/MediaController"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/MediaNode"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/MediaObject"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/MediaObjectInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/MediaSource"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/ObjectDescription"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/ObjectDescriptionModel"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Path"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/PlatformPlugin"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/SeekSlider"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/StreamInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VideoPlayer"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VideoWidget"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VideoWidgetInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VolumeFaderEffect"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VolumeFaderInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/VolumeSlider"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/phonon4qt5/KDE/Phonon/Experimental" TYPE FILE FILES
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/AbstractVideoDataOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/AudioDataOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/SnapshotInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/VideoDataOutput"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/VideoDataOutputInterface"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/VideoFrame"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/VideoFrame2"
    "/mnt/HDD/Project/Public/okulartry/phonon/includes/old/Phonon/Experimental/Visualization"
    )
endif()

