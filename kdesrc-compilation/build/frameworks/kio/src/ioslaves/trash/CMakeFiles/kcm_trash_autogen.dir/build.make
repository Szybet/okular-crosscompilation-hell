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

# Utility rule file for kcm_trash_autogen.

# Include any custom commands dependencies for this target.
include src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/progress.make

src/ioslaves/trash/CMakeFiles/kcm_trash_autogen: src/ioslaves/trash/kcmtrash.json
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target kcm_trash"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /usr/bin/cmake -E cmake_autogen /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/AutogenInfo.json Debug

src/ioslaves/trash/kcmtrash.json: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kcmtrash.desktop
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating kcmtrash.json"
	cd /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/desktoptojson --strict-path-mode --generic-data-path //mnt/HDD/Project/Public/okulartry/okular-things/share -i kcmtrash.desktop -o /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kcmtrash.json

kcm_trash_autogen: src/ioslaves/trash/CMakeFiles/kcm_trash_autogen
kcm_trash_autogen: src/ioslaves/trash/kcmtrash.json
kcm_trash_autogen: src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/build.make
.PHONY : kcm_trash_autogen

# Rule to build all files generated by this target.
src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/build: kcm_trash_autogen
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/build

src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && $(CMAKE_COMMAND) -P CMakeFiles/kcm_trash_autogen.dir/cmake_clean.cmake
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/clean

src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash_autogen.dir/depend

