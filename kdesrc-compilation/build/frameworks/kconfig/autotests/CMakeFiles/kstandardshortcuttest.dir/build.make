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
include autotests/CMakeFiles/kstandardshortcuttest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/kstandardshortcuttest.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/kstandardshortcuttest.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/kstandardshortcuttest.dir/flags.make

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kstandardshortcuttest.dir/flags.make
autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o: autotests/kstandardshortcuttest_autogen/mocs_compilation.cpp
autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/kstandardshortcuttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kstandardshortcuttest_autogen/mocs_compilation.cpp

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kstandardshortcuttest_autogen/mocs_compilation.cpp > CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/autotests/kstandardshortcuttest_autogen/mocs_compilation.cpp -o CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o: autotests/CMakeFiles/kstandardshortcuttest.dir/flags.make
autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/autotests/kstandardshortcuttest.cpp
autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o: autotests/CMakeFiles/kstandardshortcuttest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o -MF CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o.d -o CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/autotests/kstandardshortcuttest.cpp

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/autotests/kstandardshortcuttest.cpp > CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.i

autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/autotests/kstandardshortcuttest.cpp -o CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.s

# Object files for target kstandardshortcuttest
kstandardshortcuttest_OBJECTS = \
"CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o"

# External object files for target kstandardshortcuttest
kstandardshortcuttest_EXTERNAL_OBJECTS =

bin/kstandardshortcuttest: autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest_autogen/mocs_compilation.cpp.o
bin/kstandardshortcuttest: autotests/CMakeFiles/kstandardshortcuttest.dir/kstandardshortcuttest.cpp.o
bin/kstandardshortcuttest: autotests/CMakeFiles/kstandardshortcuttest.dir/build.make
bin/kstandardshortcuttest: autotests/CMakeFiles/kstandardshortcuttest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kstandardshortcuttest"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kstandardshortcuttest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/kstandardshortcuttest.dir/build: bin/kstandardshortcuttest
.PHONY : autotests/CMakeFiles/kstandardshortcuttest.dir/build

autotests/CMakeFiles/kstandardshortcuttest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/autotests && $(CMAKE_COMMAND) -P CMakeFiles/kstandardshortcuttest.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/kstandardshortcuttest.dir/clean

autotests/CMakeFiles/kstandardshortcuttest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/autotests /home/szybet/kdesrc/build/frameworks/kconfig/autotests/CMakeFiles/kstandardshortcuttest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/kstandardshortcuttest.dir/depend

