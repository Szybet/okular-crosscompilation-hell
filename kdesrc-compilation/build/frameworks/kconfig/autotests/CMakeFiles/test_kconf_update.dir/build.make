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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kconfig

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kconfig

# Include any dependencies generated for this target.
include autotests/CMakeFiles/test_kconf_update.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/test_kconf_update.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/test_kconf_update.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/test_kconf_update.dir/flags.make

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/test_kconf_update.dir/flags.make
autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o: autotests/test_kconf_update_autogen/mocs_compilation.cpp
autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/test_kconf_update.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o -MF CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconf_update_autogen/mocs_compilation.cpp

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconf_update_autogen/mocs_compilation.cpp > CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/autotests/test_kconf_update_autogen/mocs_compilation.cpp -o CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o: autotests/CMakeFiles/test_kconf_update.dir/flags.make
autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconf_update.cpp
autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o: autotests/CMakeFiles/test_kconf_update.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o -MF CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o.d -o CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconf_update.cpp

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconf_update.cpp > CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.i

autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/autotests/test_kconf_update.cpp -o CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.s

# Object files for target test_kconf_update
test_kconf_update_OBJECTS = \
"CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o"

# External object files for target test_kconf_update
test_kconf_update_EXTERNAL_OBJECTS =

bin/test_kconf_update: autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update_autogen/mocs_compilation.cpp.o
bin/test_kconf_update: autotests/CMakeFiles/test_kconf_update.dir/test_kconf_update.cpp.o
bin/test_kconf_update: autotests/CMakeFiles/test_kconf_update.dir/build.make
bin/test_kconf_update: autotests/CMakeFiles/test_kconf_update.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/test_kconf_update"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_kconf_update.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/test_kconf_update.dir/build: bin/test_kconf_update
.PHONY : autotests/CMakeFiles/test_kconf_update.dir/build

autotests/CMakeFiles/test_kconf_update.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -P CMakeFiles/test_kconf_update.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/test_kconf_update.dir/clean

autotests/CMakeFiles/test_kconf_update.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig/autotests/CMakeFiles/test_kconf_update.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/test_kconf_update.dir/depend

