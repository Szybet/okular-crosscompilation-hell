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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/karchive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/karchive

# Utility rule file for clang-format.

# Include any custom commands dependencies for this target.
include CMakeFiles/clang-format.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clang-format.dir/progress.make

clang-format: CMakeFiles/clang-format.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/deprecatedtest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/deprecatedtest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/karchivetest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/karchivetest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/karchivetest.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/karchivetest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/kcompressiondevicetest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/kcompressiondevicetest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/kcompressiondevicetest.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/kcompressiondevicetest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/kfiltertest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/kfiltertest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/kfiltertest.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/kfiltertest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/klimitediodevicetest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/klimitediodevicetest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/autotests/klimitediodevicetest.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/autotests/klimitediodevicetest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/examples/bzip2gzip/main.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/examples/bzip2gzip/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/examples/helloworld/main.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/examples/helloworld/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/examples/tarlocalfiles/main.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/examples/tarlocalfiles/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/examples/unzipper/main.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/examples/unzipper/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/k7zip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/k7zip.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/k7zip.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kar.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kar.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchive.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchive.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchive.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchive_p.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchive_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchivedirectory.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchivedirectory.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchiveentry.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchiveentry.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/karchivefile.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/karchivefile.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kbzip2filter.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kbzip2filter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kbzip2filter.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kbzip2filter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice_p.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kcompressiondevice_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kfilterbase.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kfilterdev.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kgzipfilter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice_p.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/klimitediodevice_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/knonefilter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/krcc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/krcc.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/krcc.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/ktar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/ktar.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/ktar.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kxzfilter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kzip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kzip.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kzip.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kzipfileentry.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kzipfileentry.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.h..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/src/kzstdfilter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/test_package/example.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/test_package/example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/tests/k7ziptest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/tests/k7ziptest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/tests/kartest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/tests/kartest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/tests/krcctest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/tests/ktartest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/tests/ktartest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/karchive/tests/kziptest.cpp..."
	cd /home/szybet/kdesrc/frameworks/karchive && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/karchive/tests/kziptest.cpp
.PHONY : clang-format

# Rule to build all files generated by this target.
CMakeFiles/clang-format.dir/build: clang-format
.PHONY : CMakeFiles/clang-format.dir/build

CMakeFiles/clang-format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clang-format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clang-format.dir/clean

CMakeFiles/clang-format.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/karchive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/karchive /home/szybet/kdesrc/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive /home/szybet/kdesrc/build/frameworks/karchive/CMakeFiles/clang-format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clang-format.dir/depend

