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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/ki18n

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/ki18n

# Include any dependencies generated for this target.
include src/i18n/CMakeFiles/ktranscript.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/i18n/CMakeFiles/ktranscript.dir/compiler_depend.make

# Include the progress variables for this target.
include src/i18n/CMakeFiles/ktranscript.dir/progress.make

# Include the compile flags for this target's objects.
include src/i18n/CMakeFiles/ktranscript.dir/flags.make

src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/flags.make
src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o: src/i18n/ktranscript_autogen/mocs_compilation.cpp
src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o -MF CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n/ktranscript_autogen/mocs_compilation.cpp

src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n/ktranscript_autogen/mocs_compilation.cpp > CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.i

src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n/ktranscript_autogen/mocs_compilation.cpp -o CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.s

src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/flags.make
src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp
src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o -MF CMakeFiles/ktranscript.dir/ktranscript.cpp.o.d -o CMakeFiles/ktranscript.dir/ktranscript.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp

src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ktranscript.dir/ktranscript.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp > CMakeFiles/ktranscript.dir/ktranscript.cpp.i

src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ktranscript.dir/ktranscript.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/src/i18n/ktranscript.cpp -o CMakeFiles/ktranscript.dir/ktranscript.cpp.s

src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/flags.make
src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o: /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp
src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o: src/i18n/CMakeFiles/ktranscript.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o -MF CMakeFiles/ktranscript.dir/common_helpers.cpp.o.d -o CMakeFiles/ktranscript.dir/common_helpers.cpp.o -c /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp

src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ktranscript.dir/common_helpers.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp > CMakeFiles/ktranscript.dir/common_helpers.cpp.i

src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ktranscript.dir/common_helpers.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/ki18n/src/i18n/common_helpers.cpp -o CMakeFiles/ktranscript.dir/common_helpers.cpp.s

# Object files for target ktranscript
ktranscript_OBJECTS = \
"CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/ktranscript.dir/ktranscript.cpp.o" \
"CMakeFiles/ktranscript.dir/common_helpers.cpp.o"

# External object files for target ktranscript
ktranscript_EXTERNAL_OBJECTS =

bin/ktranscript.so: src/i18n/CMakeFiles/ktranscript.dir/ktranscript_autogen/mocs_compilation.cpp.o
bin/ktranscript.so: src/i18n/CMakeFiles/ktranscript.dir/ktranscript.cpp.o
bin/ktranscript.so: src/i18n/CMakeFiles/ktranscript.dir/common_helpers.cpp.o
bin/ktranscript.so: src/i18n/CMakeFiles/ktranscript.dir/build.make
bin/ktranscript.so: src/i18n/CMakeFiles/ktranscript.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/ki18n/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared module ../../bin/ktranscript.so"
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ktranscript.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/i18n/CMakeFiles/ktranscript.dir/build: bin/ktranscript.so
.PHONY : src/i18n/CMakeFiles/ktranscript.dir/build

src/i18n/CMakeFiles/ktranscript.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n && $(CMAKE_COMMAND) -P CMakeFiles/ktranscript.dir/cmake_clean.cmake
.PHONY : src/i18n/CMakeFiles/ktranscript.dir/clean

src/i18n/CMakeFiles/ktranscript.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/ki18n && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/ki18n /home/szybet/kdesrc/frameworks/ki18n/src/i18n /home/szybet/kdesrc/build/frameworks/ki18n /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n /home/szybet/kdesrc/build/frameworks/ki18n/src/i18n/CMakeFiles/ktranscript.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/i18n/CMakeFiles/ktranscript.dir/depend

