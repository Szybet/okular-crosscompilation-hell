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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kservice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kservice

# Include any dependencies generated for this target.
include src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/progress.make

# Include the compile flags for this target's objects.
include src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/flags.make

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/flags.make
src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o: src/kbuildsycoca/kbuildsycoca5_autogen/mocs_compilation.cpp
src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kservice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca/kbuildsycoca5_autogen/mocs_compilation.cpp

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca/kbuildsycoca5_autogen/mocs_compilation.cpp > CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.i

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca/kbuildsycoca5_autogen/mocs_compilation.cpp -o CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.s

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/flags.make
src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o: /home/szybet/kdesrc/frameworks/kservice/src/kbuildsycoca/kbuildsycoca_main.cpp
src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kservice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o -MF CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o.d -o CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o -c /home/szybet/kdesrc/frameworks/kservice/src/kbuildsycoca/kbuildsycoca_main.cpp

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kservice/src/kbuildsycoca/kbuildsycoca_main.cpp > CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.i

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kservice/src/kbuildsycoca/kbuildsycoca_main.cpp -o CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.s

# Object files for target kbuildsycoca5
kbuildsycoca5_OBJECTS = \
"CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o"

# External object files for target kbuildsycoca5
kbuildsycoca5_EXTERNAL_OBJECTS =

bin/kbuildsycoca5: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca5_autogen/mocs_compilation.cpp.o
bin/kbuildsycoca5: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/kbuildsycoca_main.cpp.o
bin/kbuildsycoca5: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/build.make
bin/kbuildsycoca5: src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kservice/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/kbuildsycoca5"
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kbuildsycoca5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/build: bin/kbuildsycoca5
.PHONY : src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/build

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca && $(CMAKE_COMMAND) -P CMakeFiles/kbuildsycoca5.dir/cmake_clean.cmake
.PHONY : src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/clean

src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kservice && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kservice /home/szybet/kdesrc/frameworks/kservice/src/kbuildsycoca /home/szybet/kdesrc/build/frameworks/kservice /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca /home/szybet/kdesrc/build/frameworks/kservice/src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kbuildsycoca/CMakeFiles/kbuildsycoca5.dir/depend

