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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwallet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwallet

# Include any dependencies generated for this target.
include src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/compiler_depend.make

# Include the progress variables for this target.
include src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/progress.make

# Include the compile flags for this target's objects.
include src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/flags.make

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/flags.make
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o: src/runtime/kwallet-query/src/kwallet-query_autogen/mocs_compilation.cpp
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwallet/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src/kwallet-query_autogen/mocs_compilation.cpp

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src/kwallet-query_autogen/mocs_compilation.cpp > CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.i

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src/kwallet-query_autogen/mocs_compilation.cpp -o CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.s

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/flags.make
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o: /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/main.cpp
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwallet/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o -MF CMakeFiles/kwallet-query.dir/main.cpp.o.d -o CMakeFiles/kwallet-query.dir/main.cpp.o -c /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/main.cpp

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwallet-query.dir/main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/main.cpp > CMakeFiles/kwallet-query.dir/main.cpp.i

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwallet-query.dir/main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/main.cpp -o CMakeFiles/kwallet-query.dir/main.cpp.s

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/flags.make
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o: /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/querydriver.cpp
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwallet/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o -MF CMakeFiles/kwallet-query.dir/querydriver.cpp.o.d -o CMakeFiles/kwallet-query.dir/querydriver.cpp.o -c /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/querydriver.cpp

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kwallet-query.dir/querydriver.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/querydriver.cpp > CMakeFiles/kwallet-query.dir/querydriver.cpp.i

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kwallet-query.dir/querydriver.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src/querydriver.cpp -o CMakeFiles/kwallet-query.dir/querydriver.cpp.s

# Object files for target kwallet-query
kwallet__query_OBJECTS = \
"CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kwallet-query.dir/main.cpp.o" \
"CMakeFiles/kwallet-query.dir/querydriver.cpp.o"

# External object files for target kwallet-query
kwallet__query_EXTERNAL_OBJECTS =

bin/kwallet-query: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/kwallet-query_autogen/mocs_compilation.cpp.o
bin/kwallet-query: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/main.cpp.o
bin/kwallet-query: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/querydriver.cpp.o
bin/kwallet-query: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/build.make
bin/kwallet-query: src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwallet/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../../../bin/kwallet-query"
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kwallet-query.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/build: bin/kwallet-query
.PHONY : src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/build

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src && $(CMAKE_COMMAND) -P CMakeFiles/kwallet-query.dir/cmake_clean.cmake
.PHONY : src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/clean

src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwallet && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwallet /home/szybet/kdesrc/frameworks/kwallet/src/runtime/kwallet-query/src /home/szybet/kdesrc/build/frameworks/kwallet /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src /home/szybet/kdesrc/build/frameworks/kwallet/src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/runtime/kwallet-query/src/CMakeFiles/kwallet-query.dir/depend

