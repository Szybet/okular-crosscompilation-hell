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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kcodecs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kcodecs

# Include any dependencies generated for this target.
include autotests/CMakeFiles/base45test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/base45test.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/base45test.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/base45test.dir/flags.make

autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/base45test.dir/flags.make
autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o: autotests/base45test_autogen/mocs_compilation.cpp
autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/base45test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcodecs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcodecs/autotests/base45test_autogen/mocs_compilation.cpp

autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcodecs/autotests/base45test_autogen/mocs_compilation.cpp > CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcodecs/autotests/base45test_autogen/mocs_compilation.cpp -o CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/base45test.dir/base45test.cpp.o: autotests/CMakeFiles/base45test.dir/flags.make
autotests/CMakeFiles/base45test.dir/base45test.cpp.o: /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp
autotests/CMakeFiles/base45test.dir/base45test.cpp.o: autotests/CMakeFiles/base45test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcodecs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/base45test.dir/base45test.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/base45test.dir/base45test.cpp.o -MF CMakeFiles/base45test.dir/base45test.cpp.o.d -o CMakeFiles/base45test.dir/base45test.cpp.o -c /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp

autotests/CMakeFiles/base45test.dir/base45test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/base45test.dir/base45test.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp > CMakeFiles/base45test.dir/base45test.cpp.i

autotests/CMakeFiles/base45test.dir/base45test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/base45test.dir/base45test.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp -o CMakeFiles/base45test.dir/base45test.cpp.s

# Object files for target base45test
base45test_OBJECTS = \
"CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/base45test.dir/base45test.cpp.o"

# External object files for target base45test
base45test_EXTERNAL_OBJECTS =

bin/base45test: autotests/CMakeFiles/base45test.dir/base45test_autogen/mocs_compilation.cpp.o
bin/base45test: autotests/CMakeFiles/base45test.dir/base45test.cpp.o
bin/base45test: autotests/CMakeFiles/base45test.dir/build.make
bin/base45test: autotests/CMakeFiles/base45test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kcodecs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/base45test"
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/base45test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/base45test.dir/build: bin/base45test
.PHONY : autotests/CMakeFiles/base45test.dir/build

autotests/CMakeFiles/base45test.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kcodecs/autotests && $(CMAKE_COMMAND) -P CMakeFiles/base45test.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/base45test.dir/clean

autotests/CMakeFiles/base45test.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcodecs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcodecs /home/szybet/kdesrc/frameworks/kcodecs/autotests /home/szybet/kdesrc/build/frameworks/kcodecs /home/szybet/kdesrc/build/frameworks/kcodecs/autotests /home/szybet/kdesrc/build/frameworks/kcodecs/autotests/CMakeFiles/base45test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/base45test.dir/depend

