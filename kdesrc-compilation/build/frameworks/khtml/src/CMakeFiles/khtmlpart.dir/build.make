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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/khtml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/khtml

# Include any dependencies generated for this target.
include src/CMakeFiles/khtmlpart.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/khtmlpart.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/khtmlpart.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/khtmlpart.dir/flags.make

src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o: src/CMakeFiles/khtmlpart.dir/flags.make
src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o: src/khtmlpart_autogen/mocs_compilation.cpp
src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o: src/CMakeFiles/khtmlpart.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/khtml/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o -MF CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/khtml/src/khtmlpart_autogen/mocs_compilation.cpp

src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/khtml/src/khtmlpart_autogen/mocs_compilation.cpp > CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.i

src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/khtml/src/khtmlpart_autogen/mocs_compilation.cpp -o CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.s

src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o: src/CMakeFiles/khtmlpart.dir/flags.make
src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o: /home/szybet/kdesrc/frameworks/khtml/src/khtml_factory.cpp
src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o: src/CMakeFiles/khtmlpart.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/khtml/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o -MF CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o.d -o CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o -c /home/szybet/kdesrc/frameworks/khtml/src/khtml_factory.cpp

src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/khtmlpart.dir/khtml_factory.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/khtml/src/khtml_factory.cpp > CMakeFiles/khtmlpart.dir/khtml_factory.cpp.i

src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/khtmlpart.dir/khtml_factory.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/khtml/src/khtml_factory.cpp -o CMakeFiles/khtmlpart.dir/khtml_factory.cpp.s

# Object files for target khtmlpart
khtmlpart_OBJECTS = \
"CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o"

# External object files for target khtmlpart
khtmlpart_EXTERNAL_OBJECTS =

bin/khtmlpart.so: src/CMakeFiles/khtmlpart.dir/khtmlpart_autogen/mocs_compilation.cpp.o
bin/khtmlpart.so: src/CMakeFiles/khtmlpart.dir/khtml_factory.cpp.o
bin/khtmlpart.so: src/CMakeFiles/khtmlpart.dir/build.make
bin/khtmlpart.so: src/CMakeFiles/khtmlpart.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/khtml/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared module ../bin/khtmlpart.so"
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/khtmlpart.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/khtmlpart.dir/build: bin/khtmlpart.so
.PHONY : src/CMakeFiles/khtmlpart.dir/build

src/CMakeFiles/khtmlpart.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/khtml/src && $(CMAKE_COMMAND) -P CMakeFiles/khtmlpart.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/khtmlpart.dir/clean

src/CMakeFiles/khtmlpart.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/khtml && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/khtml /home/szybet/kdesrc/frameworks/khtml/src /home/szybet/kdesrc/build/frameworks/khtml /home/szybet/kdesrc/build/frameworks/khtml/src /home/szybet/kdesrc/build/frameworks/khtml/src/CMakeFiles/khtmlpart.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/khtmlpart.dir/depend

