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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kcoreaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kcoreaddons

# Include any dependencies generated for this target.
include autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/flags.make

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/flags.make
autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o: autotests/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp
autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o -MF CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp > CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp -o CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/flags.make
autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o: /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/statickpluginclass_2.cpp
autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o -MF CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o.d -o CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o -c /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/statickpluginclass_2.cpp

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/statickpluginclass_2.cpp > CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.i

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/statickpluginclass_2.cpp -o CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.s

# Object files for target static_jsonplugin_cmake_macro_2
static_jsonplugin_cmake_macro_2_OBJECTS = \
"CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o"

# External object files for target static_jsonplugin_cmake_macro_2
static_jsonplugin_cmake_macro_2_EXTERNAL_OBJECTS =

lib/libstatic_jsonplugin_cmake_macro_2.a: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/static_jsonplugin_cmake_macro_2_autogen/mocs_compilation.cpp.o
lib/libstatic_jsonplugin_cmake_macro_2.a: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/statickpluginclass_2.cpp.o
lib/libstatic_jsonplugin_cmake_macro_2.a: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/build.make
lib/libstatic_jsonplugin_cmake_macro_2.a: autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../lib/libstatic_jsonplugin_cmake_macro_2.a"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/static_jsonplugin_cmake_macro_2.dir/cmake_clean_target.cmake
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/static_jsonplugin_cmake_macro_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/build: lib/libstatic_jsonplugin_cmake_macro_2.a
.PHONY : autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/build

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/static_jsonplugin_cmake_macro_2.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/clean

autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcoreaddons /home/szybet/kdesrc/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/static_jsonplugin_cmake_macro_2.dir/depend

