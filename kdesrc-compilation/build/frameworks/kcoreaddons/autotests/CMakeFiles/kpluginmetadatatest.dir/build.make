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
include autotests/CMakeFiles/kpluginmetadatatest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kpluginmetadatatest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make
autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o: autotests/kpluginmetadatatest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kpluginmetadatatest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kpluginmetadatatest_autogen/mocs_compilation.cpp > CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kpluginmetadatatest_autogen/mocs_compilation.cpp -o CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make
autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o: /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kpluginmetadatatest.cpp
autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o -MF CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o.d -o CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o -c /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kpluginmetadatatest.cpp

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kpluginmetadatatest.cpp > CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.i

autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kcoreaddons/autotests/kpluginmetadatatest.cpp -o CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.s

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o: autotests/kcoreaddons_static_staticnamespace_plugins.cpp
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o -MF CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o.d -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace_plugins.cpp

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace_plugins.cpp > CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.i

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace_plugins.cpp -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.s

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o: autotests/kcoreaddons_static_staticnamespace2_plugins.cpp
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o -MF CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o.d -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace2_plugins.cpp

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace2_plugins.cpp > CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.i

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace2_plugins.cpp -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.s

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/flags.make
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o: autotests/kcoreaddons_static_staticnamespace3_plugins.cpp
autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o: autotests/CMakeFiles/kpluginmetadatatest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o -MF CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o.d -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o -c /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace3_plugins.cpp

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace3_plugins.cpp > CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.i

autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/kcoreaddons_static_staticnamespace3_plugins.cpp -o CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.s

# Object files for target kpluginmetadatatest
kpluginmetadatatest_OBJECTS = \
"CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o" \
"CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o" \
"CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o" \
"CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o"

# External object files for target kpluginmetadatatest
kpluginmetadatatest_EXTERNAL_OBJECTS =

bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest_autogen/mocs_compilation.cpp.o
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/kpluginmetadatatest.cpp.o
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace_plugins.cpp.o
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace2_plugins.cpp.o
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/kcoreaddons_static_staticnamespace3_plugins.cpp.o
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/build.make
bin/kpluginmetadatatest: lib/libautotests_static.a
bin/kpluginmetadatatest: lib/libstatic_jsonplugin_cmake_macro.a
bin/kpluginmetadatatest: lib/libstatic_jsonplugin_cmake_macro_2.a
bin/kpluginmetadatatest: lib/libstatic_plugin_without_metadata.a
bin/kpluginmetadatatest: lib/libautotests_static.a
bin/kpluginmetadatatest: autotests/CMakeFiles/kpluginmetadatatest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kcoreaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ../bin/kpluginmetadatatest"
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kpluginmetadatatest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kpluginmetadatatest.dir/build: bin/kpluginmetadatatest
.PHONY : autotests/CMakeFiles/kpluginmetadatatest.dir/build

autotests/CMakeFiles/kpluginmetadatatest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kpluginmetadatatest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kpluginmetadatatest.dir/clean

autotests/CMakeFiles/kpluginmetadatatest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcoreaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcoreaddons /home/szybet/kdesrc/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests /home/szybet/kdesrc/build/frameworks/kcoreaddons/autotests/CMakeFiles/kpluginmetadatatest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kpluginmetadatatest.dir/depend

