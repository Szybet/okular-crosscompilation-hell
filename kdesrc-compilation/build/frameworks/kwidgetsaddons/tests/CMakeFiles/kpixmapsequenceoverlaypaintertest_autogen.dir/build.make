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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwidgetsaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwidgetsaddons

# Utility rule file for kpixmapsequenceoverlaypaintertest_autogen.

# Include any custom commands dependencies for this target.
include tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/progress.make

tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target kpixmapsequenceoverlaypaintertest"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/AutogenInfo.json Debug

kpixmapsequenceoverlaypaintertest_autogen: tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen
kpixmapsequenceoverlaypaintertest_autogen: tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/build.make
.PHONY : kpixmapsequenceoverlaypaintertest_autogen

# Rule to build all files generated by this target.
tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/build: kpixmapsequenceoverlaypaintertest_autogen
.PHONY : tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/build

tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && $(CMAKE_COMMAND) -P CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/clean

tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/kpixmapsequenceoverlaypaintertest_autogen.dir/depend

