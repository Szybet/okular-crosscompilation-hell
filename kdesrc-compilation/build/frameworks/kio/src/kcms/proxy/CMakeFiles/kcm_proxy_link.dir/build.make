# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kio

# Utility rule file for kcm_proxy_link.

# Include any custom commands dependencies for this target.
include src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/progress.make

src/kcms/proxy/CMakeFiles/kcm_proxy_link:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/proxy && /usr/bin/cmake -E create_symlink ../../../kcm_proxy.so /home/szybet/kdesrc/build/frameworks/kio/src/kcms/proxy/kcm_proxy.so

kcm_proxy_link: src/kcms/proxy/CMakeFiles/kcm_proxy_link
kcm_proxy_link: src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/build.make
.PHONY : kcm_proxy_link

# Rule to build all files generated by this target.
src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/build: kcm_proxy_link
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/build

src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kcms/proxy && $(CMAKE_COMMAND) -P CMakeFiles/kcm_proxy_link.dir/cmake_clean.cmake
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/clean

src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kcms/proxy /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kcms/proxy /home/szybet/kdesrc/build/frameworks/kio/src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy_link.dir/depend

