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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/knotifications

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/knotifications

# Utility rule file for fetch-translations.

# Include any custom commands dependencies for this target.
include CMakeFiles/fetch-translations.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fetch-translations.dir/progress.make

CMakeFiles/fetch-translations: releaseme
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Downloading translations for frameworks/knotifications branch trunk..."
	git -C /home/szybet/kdesrc/build/frameworks/knotifications/releaseme pull
	cmake -E remove_directory /home/szybet/kdesrc/build/frameworks/knotifications/po
	cmake -E remove_directory /home/szybet/kdesrc/build/frameworks/knotifications/poqm
	ruby /home/szybet/kdesrc/build/frameworks/knotifications/releaseme/fetchpo.rb --origin trunk --project frameworks/knotifications --output-dir /home/szybet/kdesrc/build/frameworks/knotifications/po --output-poqm-dir /home/szybet/kdesrc/build/frameworks/knotifications/poqm /home/szybet/kdesrc/frameworks/knotifications

releaseme:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Fetching releaseme scripts to download translations..."
	git clone --depth 1 https://invent.kde.org/sdk/releaseme.git

fetch-translations: CMakeFiles/fetch-translations
fetch-translations: releaseme
fetch-translations: CMakeFiles/fetch-translations.dir/build.make
.PHONY : fetch-translations

# Rule to build all files generated by this target.
CMakeFiles/fetch-translations.dir/build: fetch-translations
.PHONY : CMakeFiles/fetch-translations.dir/build

CMakeFiles/fetch-translations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fetch-translations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fetch-translations.dir/clean

CMakeFiles/fetch-translations.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/knotifications && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/knotifications /home/szybet/kdesrc/frameworks/knotifications /home/szybet/kdesrc/build/frameworks/knotifications /home/szybet/kdesrc/build/frameworks/knotifications /home/szybet/kdesrc/build/frameworks/knotifications/CMakeFiles/fetch-translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fetch-translations.dir/depend

