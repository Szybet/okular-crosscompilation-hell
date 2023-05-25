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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kde/kdegraphics/okular

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug

# Utility rule file for okularGenerator_mobi_autogen.

# Include any custom commands dependencies for this target.
include generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/progress.make

generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen: /home/szybet/kdesrc/kde/kdegraphics/okular/generators/mobipocket/libokularGenerator_mobi.json
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target okularGenerator_mobi"
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/mobipocket && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/AutogenInfo.json Debug

okularGenerator_mobi_autogen: generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen
okularGenerator_mobi_autogen: generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/build.make
.PHONY : okularGenerator_mobi_autogen

# Rule to build all files generated by this target.
generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/build: okularGenerator_mobi_autogen
.PHONY : generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/build

generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/clean:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/mobipocket && $(CMAKE_COMMAND) -P CMakeFiles/okularGenerator_mobi_autogen.dir/cmake_clean.cmake
.PHONY : generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/clean

generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/depend:
	cd /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kde/kdegraphics/okular /home/szybet/kdesrc/kde/kdegraphics/okular/generators/mobipocket /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/mobipocket /home/szybet/kdesrc/kde/kdegraphics/build-okular-Qt_5_15_2_sysroot-Debug/generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : generators/mobipocket/CMakeFiles/okularGenerator_mobi_autogen.dir/depend

