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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kglobalaccel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kglobalaccel

# Include any dependencies generated for this target.
include src/runtime/CMakeFiles/kglobalaccel5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/runtime/CMakeFiles/kglobalaccel5.dir/compiler_depend.make

# Include the progress variables for this target.
include src/runtime/CMakeFiles/kglobalaccel5.dir/progress.make

# Include the compile flags for this target's objects.
include src/runtime/CMakeFiles/kglobalaccel5.dir/flags.make

src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/flags.make
src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o: src/runtime/kglobalaccel5_autogen/mocs_compilation.cpp
src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kglobalaccel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime/kglobalaccel5_autogen/mocs_compilation.cpp

src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime/kglobalaccel5_autogen/mocs_compilation.cpp > CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.i

src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime/kglobalaccel5_autogen/mocs_compilation.cpp -o CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.s

src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/flags.make
src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o: /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/main.cpp
src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kglobalaccel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o -MF CMakeFiles/kglobalaccel5.dir/main.cpp.o.d -o CMakeFiles/kglobalaccel5.dir/main.cpp.o -c /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/main.cpp

src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kglobalaccel5.dir/main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/main.cpp > CMakeFiles/kglobalaccel5.dir/main.cpp.i

src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kglobalaccel5.dir/main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/main.cpp -o CMakeFiles/kglobalaccel5.dir/main.cpp.s

src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/flags.make
src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o: /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/logging.cpp
src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o: src/runtime/CMakeFiles/kglobalaccel5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kglobalaccel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o -MF CMakeFiles/kglobalaccel5.dir/logging.cpp.o.d -o CMakeFiles/kglobalaccel5.dir/logging.cpp.o -c /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/logging.cpp

src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kglobalaccel5.dir/logging.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/logging.cpp > CMakeFiles/kglobalaccel5.dir/logging.cpp.i

src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kglobalaccel5.dir/logging.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime/logging.cpp -o CMakeFiles/kglobalaccel5.dir/logging.cpp.s

# Object files for target kglobalaccel5
kglobalaccel5_OBJECTS = \
"CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kglobalaccel5.dir/main.cpp.o" \
"CMakeFiles/kglobalaccel5.dir/logging.cpp.o"

# External object files for target kglobalaccel5
kglobalaccel5_EXTERNAL_OBJECTS =

bin/kglobalaccel5: src/runtime/CMakeFiles/kglobalaccel5.dir/kglobalaccel5_autogen/mocs_compilation.cpp.o
bin/kglobalaccel5: src/runtime/CMakeFiles/kglobalaccel5.dir/main.cpp.o
bin/kglobalaccel5: src/runtime/CMakeFiles/kglobalaccel5.dir/logging.cpp.o
bin/kglobalaccel5: src/runtime/CMakeFiles/kglobalaccel5.dir/build.make
bin/kglobalaccel5: src/runtime/CMakeFiles/kglobalaccel5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kglobalaccel/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../bin/kglobalaccel5"
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kglobalaccel5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/runtime/CMakeFiles/kglobalaccel5.dir/build: bin/kglobalaccel5
.PHONY : src/runtime/CMakeFiles/kglobalaccel5.dir/build

src/runtime/CMakeFiles/kglobalaccel5.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime && $(CMAKE_COMMAND) -P CMakeFiles/kglobalaccel5.dir/cmake_clean.cmake
.PHONY : src/runtime/CMakeFiles/kglobalaccel5.dir/clean

src/runtime/CMakeFiles/kglobalaccel5.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kglobalaccel && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kglobalaccel /home/szybet/kdesrc/frameworks/kglobalaccel/src/runtime /home/szybet/kdesrc/build/frameworks/kglobalaccel /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime /home/szybet/kdesrc/build/frameworks/kglobalaccel/src/runtime/CMakeFiles/kglobalaccel5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/runtime/CMakeFiles/kglobalaccel5.dir/depend

