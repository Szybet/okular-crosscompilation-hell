# For more information see the CMake documentation:
# https://cmake.org/documentation/
# https://community.kde.org/Guidelines_and_HOWTOs/CMake

# Project name
project(HelloWorld)

# Look for the KArchive module
find_package(KF5Archive ${KF_VERSION} REQUIRED)

find_package(Qt${QT_MAJOR_VERSION}Core REQUIRED)

add_executable(helloworld main.cpp)

# Link our executable with the KArchive library
target_link_libraries(helloworld KF5::Archive Qt${QT_MAJOR_VERSION}::Core)
