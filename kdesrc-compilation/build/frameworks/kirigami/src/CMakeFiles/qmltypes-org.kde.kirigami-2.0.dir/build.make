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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kirigami

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kirigami

# Utility rule file for qmltypes-org.kde.kirigami-2.0.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/progress.make

src/CMakeFiles/qmltypes-org.kde.kirigami-2.0:
	cd /home/szybet/kdesrc/build/frameworks/kirigami/src && qmlplugindump -nonrelocatable org.kde.kirigami 2.0 lib/qml > /home/szybet/kdesrc/frameworks/kirigami/src/plugins.qmltypes

qmltypes-org.kde.kirigami-2.0: src/CMakeFiles/qmltypes-org.kde.kirigami-2.0
qmltypes-org.kde.kirigami-2.0: src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/build.make
.PHONY : qmltypes-org.kde.kirigami-2.0

# Rule to build all files generated by this target.
src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/build: qmltypes-org.kde.kirigami-2.0
.PHONY : src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/build

src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kirigami/src && $(CMAKE_COMMAND) -P CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/clean

src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kirigami && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kirigami /home/szybet/kdesrc/frameworks/kirigami/src /home/szybet/kdesrc/build/frameworks/kirigami /home/szybet/kdesrc/build/frameworks/kirigami/src /home/szybet/kdesrc/build/frameworks/kirigami/src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/qmltypes-org.kde.kirigami-2.0.dir/depend

