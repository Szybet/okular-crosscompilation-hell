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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/purpose

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/purpose

# Include any dependencies generated for this target.
include src/CMakeFiles/purposeprocess.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/purposeprocess.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/purposeprocess.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/purposeprocess.dir/flags.make

src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o: src/CMakeFiles/purposeprocess.dir/flags.make
src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o: src/purposeprocess_autogen/mocs_compilation.cpp
src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o: src/CMakeFiles/purposeprocess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o -MF CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/purpose/src/purposeprocess_autogen/mocs_compilation.cpp

src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/purpose/src/purposeprocess_autogen/mocs_compilation.cpp > CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.i

src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/purpose/src/purposeprocess_autogen/mocs_compilation.cpp -o CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.s

src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o: src/CMakeFiles/purposeprocess.dir/flags.make
src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o: /home/szybet/kdesrc/frameworks/purpose/src/externalprocess/purposeprocess_main.cpp
src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o: src/CMakeFiles/purposeprocess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o -MF CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o.d -o CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o -c /home/szybet/kdesrc/frameworks/purpose/src/externalprocess/purposeprocess_main.cpp

src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/purpose/src/externalprocess/purposeprocess_main.cpp > CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.i

src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/purpose/src/externalprocess/purposeprocess_main.cpp -o CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.s

src/CMakeFiles/purposeprocess.dir/helper.cpp.o: src/CMakeFiles/purposeprocess.dir/flags.make
src/CMakeFiles/purposeprocess.dir/helper.cpp.o: /home/szybet/kdesrc/frameworks/purpose/src/helper.cpp
src/CMakeFiles/purposeprocess.dir/helper.cpp.o: src/CMakeFiles/purposeprocess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/purposeprocess.dir/helper.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/purposeprocess.dir/helper.cpp.o -MF CMakeFiles/purposeprocess.dir/helper.cpp.o.d -o CMakeFiles/purposeprocess.dir/helper.cpp.o -c /home/szybet/kdesrc/frameworks/purpose/src/helper.cpp

src/CMakeFiles/purposeprocess.dir/helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposeprocess.dir/helper.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/purpose/src/helper.cpp > CMakeFiles/purposeprocess.dir/helper.cpp.i

src/CMakeFiles/purposeprocess.dir/helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposeprocess.dir/helper.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/purpose/src/helper.cpp -o CMakeFiles/purposeprocess.dir/helper.cpp.s

src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o: src/CMakeFiles/purposeprocess.dir/flags.make
src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o: src/purpose_external_process_debug.cpp
src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o: src/CMakeFiles/purposeprocess.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o -MF CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o.d -o CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o -c /home/szybet/kdesrc/build/frameworks/purpose/src/purpose_external_process_debug.cpp

src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/purpose/src/purpose_external_process_debug.cpp > CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.i

src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/purpose/src/purpose_external_process_debug.cpp -o CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.s

# Object files for target purposeprocess
purposeprocess_OBJECTS = \
"CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o" \
"CMakeFiles/purposeprocess.dir/helper.cpp.o" \
"CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o"

# External object files for target purposeprocess
purposeprocess_EXTERNAL_OBJECTS =

bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/purposeprocess_autogen/mocs_compilation.cpp.o
bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/externalprocess/purposeprocess_main.cpp.o
bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/helper.cpp.o
bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/purpose_external_process_debug.cpp.o
bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/build.make
bin/purposeprocess: src/CMakeFiles/purposeprocess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/purpose/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../bin/purposeprocess"
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/purposeprocess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/purposeprocess.dir/build: bin/purposeprocess
.PHONY : src/CMakeFiles/purposeprocess.dir/build

src/CMakeFiles/purposeprocess.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/purpose/src && $(CMAKE_COMMAND) -P CMakeFiles/purposeprocess.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/purposeprocess.dir/clean

src/CMakeFiles/purposeprocess.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/purpose && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/purpose /home/szybet/kdesrc/frameworks/purpose/src /home/szybet/kdesrc/build/frameworks/purpose /home/szybet/kdesrc/build/frameworks/purpose/src /home/szybet/kdesrc/build/frameworks/purpose/src/CMakeFiles/purposeprocess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/purposeprocess.dir/depend

