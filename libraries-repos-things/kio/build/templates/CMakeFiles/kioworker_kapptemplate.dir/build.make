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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kio/build

# Utility rule file for kioworker_kapptemplate.

# Include any custom commands dependencies for this target.
include templates/CMakeFiles/kioworker_kapptemplate.dir/compiler_depend.make

# Include the progress variables for this target.
include templates/CMakeFiles/kioworker_kapptemplate.dir/progress.make

templates/CMakeFiles/kioworker_kapptemplate: templates/kioworker.tar.bz2

templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/CMakeLists.txt
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/LICENSES
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/LICENSES/LGPL-2.1-or-later.txt
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/Messages.sh
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/README.md
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/install.sh
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/kioworker.kdevtemplate
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/%{APPNAMELC}.cpp
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/%{APPNAMELC}.h
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/CMakeLists.txt
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/mydatasystem.cpp
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/mydatasystem.h
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/src/myproto.json
templates/kioworker.tar.bz2: /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker/uninstall.sh
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating kioworker.tar.bz2"
	cd /mnt/HDD/Project/Public/okulartry/kio/templates/kioworker && /sbin/tar --exclude .kdev_ignore --exclude .svn --sort=name --mode=go=rX,u+rw,a-s --numeric-owner --owner=0 --group=0 --mtime="@1684261918" --pax-option=exthdr.name=%d/PaxHeaders/%f,delete=atime,delete=ctime -c -j -f /mnt/HDD/Project/Public/okulartry/kio/build/templates/kioworker.tar.bz2 .

kioworker_kapptemplate: templates/CMakeFiles/kioworker_kapptemplate
kioworker_kapptemplate: templates/kioworker.tar.bz2
kioworker_kapptemplate: templates/CMakeFiles/kioworker_kapptemplate.dir/build.make
.PHONY : kioworker_kapptemplate

# Rule to build all files generated by this target.
templates/CMakeFiles/kioworker_kapptemplate.dir/build: kioworker_kapptemplate
.PHONY : templates/CMakeFiles/kioworker_kapptemplate.dir/build

templates/CMakeFiles/kioworker_kapptemplate.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/kio/build/templates && $(CMAKE_COMMAND) -P CMakeFiles/kioworker_kapptemplate.dir/cmake_clean.cmake
.PHONY : templates/CMakeFiles/kioworker_kapptemplate.dir/clean

templates/CMakeFiles/kioworker_kapptemplate.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/kio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kio /mnt/HDD/Project/Public/okulartry/kio/templates /mnt/HDD/Project/Public/okulartry/kio/build /mnt/HDD/Project/Public/okulartry/kio/build/templates /mnt/HDD/Project/Public/okulartry/kio/build/templates/CMakeFiles/kioworker_kapptemplate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : templates/CMakeFiles/kioworker_kapptemplate.dir/depend

