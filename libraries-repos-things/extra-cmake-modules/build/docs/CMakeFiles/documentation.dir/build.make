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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/extra-cmake-modules

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build

# Utility rule file for documentation.

# Include any custom commands dependencies for this target.
include docs/CMakeFiles/documentation.dir/compiler_depend.make

# Include the progress variables for this target.
include docs/CMakeFiles/documentation.dir/progress.make

docs/CMakeFiles/documentation: docs/doc_format_html
docs/CMakeFiles/documentation: docs/doc_format_man

docs/doc_format_html:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "sphinx-build html: see /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/build-html.log"
	cd /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs && /sbin/sphinx-build -D man_make_section_directory=0 -c /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs -d /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/doctrees -b html /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/docs /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/html > build-html.log

docs/doc_format_man: docs/doc_format_html
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "sphinx-build man: see /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/build-man.log"
	cd /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs && /sbin/sphinx-build -D man_make_section_directory=0 -c /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs -d /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/doctrees -b man /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/docs /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/man > build-man.log

documentation: docs/CMakeFiles/documentation
documentation: docs/doc_format_html
documentation: docs/doc_format_man
documentation: docs/CMakeFiles/documentation.dir/build.make
.PHONY : documentation

# Rule to build all files generated by this target.
docs/CMakeFiles/documentation.dir/build: documentation
.PHONY : docs/CMakeFiles/documentation.dir/build

docs/CMakeFiles/documentation.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs && $(CMAKE_COMMAND) -P CMakeFiles/documentation.dir/cmake_clean.cmake
.PHONY : docs/CMakeFiles/documentation.dir/clean

docs/CMakeFiles/documentation.dir/depend:
	cd /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/extra-cmake-modules /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/docs /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs /mnt/HDD/Project/Public/okulartry/extra-cmake-modules/build/docs/CMakeFiles/documentation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : docs/CMakeFiles/documentation.dir/depend

