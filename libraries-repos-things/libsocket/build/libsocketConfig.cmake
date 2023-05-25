set(libsocket_INCLUDE_DIRS "/mnt/HDD/Project/Public/okulartry/libsocket/headers")

set(libsocket_BINARY_DIR "/mnt/HDD/Project/Public/okulartry/libsocket/build")

include(${libsocket_BINARY_DIR}/libsocketTargets.cmake)

set(libsocket_LIBRARIES socket++)
