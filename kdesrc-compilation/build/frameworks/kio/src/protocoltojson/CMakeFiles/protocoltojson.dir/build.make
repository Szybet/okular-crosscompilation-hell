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

# Include any dependencies generated for this target.
include src/protocoltojson/CMakeFiles/protocoltojson.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/protocoltojson/CMakeFiles/protocoltojson.dir/compiler_depend.make

# Include the progress variables for this target.
include src/protocoltojson/CMakeFiles/protocoltojson.dir/progress.make

# Include the compile flags for this target's objects.
include src/protocoltojson/CMakeFiles/protocoltojson.dir/flags.make

src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o: src/protocoltojson/CMakeFiles/protocoltojson.dir/flags.make
src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o: src/protocoltojson/protocoltojson_autogen/mocs_compilation.cpp
src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o: src/protocoltojson/CMakeFiles/protocoltojson.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o -MF CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson/protocoltojson_autogen/mocs_compilation.cpp

src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson/protocoltojson_autogen/mocs_compilation.cpp > CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.i

src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson/protocoltojson_autogen/mocs_compilation.cpp -o CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.s

src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o: src/protocoltojson/CMakeFiles/protocoltojson.dir/flags.make
src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/protocoltojson/main.cpp
src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o: src/protocoltojson/CMakeFiles/protocoltojson.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o -MF CMakeFiles/protocoltojson.dir/main.cpp.o.d -o CMakeFiles/protocoltojson.dir/main.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/protocoltojson/main.cpp

src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protocoltojson.dir/main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/protocoltojson/main.cpp > CMakeFiles/protocoltojson.dir/main.cpp.i

src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protocoltojson.dir/main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/protocoltojson/main.cpp -o CMakeFiles/protocoltojson.dir/main.cpp.s

# Object files for target protocoltojson
protocoltojson_OBJECTS = \
"CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/protocoltojson.dir/main.cpp.o"

# External object files for target protocoltojson
protocoltojson_EXTERNAL_OBJECTS =

bin/protocoltojson: src/protocoltojson/CMakeFiles/protocoltojson.dir/protocoltojson_autogen/mocs_compilation.cpp.o
bin/protocoltojson: src/protocoltojson/CMakeFiles/protocoltojson.dir/main.cpp.o
bin/protocoltojson: src/protocoltojson/CMakeFiles/protocoltojson.dir/build.make
bin/protocoltojson: src/protocoltojson/CMakeFiles/protocoltojson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/protocoltojson"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protocoltojson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/protocoltojson/CMakeFiles/protocoltojson.dir/build: bin/protocoltojson
.PHONY : src/protocoltojson/CMakeFiles/protocoltojson.dir/build

src/protocoltojson/CMakeFiles/protocoltojson.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson && $(CMAKE_COMMAND) -P CMakeFiles/protocoltojson.dir/cmake_clean.cmake
.PHONY : src/protocoltojson/CMakeFiles/protocoltojson.dir/clean

src/protocoltojson/CMakeFiles/protocoltojson.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/protocoltojson /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson /home/szybet/kdesrc/build/frameworks/kio/src/protocoltojson/CMakeFiles/protocoltojson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/protocoltojson/CMakeFiles/protocoltojson.dir/depend

