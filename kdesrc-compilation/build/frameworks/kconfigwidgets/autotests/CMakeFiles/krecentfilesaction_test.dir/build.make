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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kconfigwidgets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kconfigwidgets

# Include any dependencies generated for this target.
include autotests/CMakeFiles/krecentfilesaction_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include autotests/CMakeFiles/krecentfilesaction_test.dir/compiler_depend.make

# Include the progress variables for this target.
include autotests/CMakeFiles/krecentfilesaction_test.dir/progress.make

# Include the compile flags for this target's objects.
include autotests/CMakeFiles/krecentfilesaction_test.dir/flags.make

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/krecentfilesaction_test.dir/flags.make
autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o: autotests/krecentfilesaction_test_autogen/mocs_compilation.cpp
autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o: autotests/CMakeFiles/krecentfilesaction_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o -MF CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/krecentfilesaction_test_autogen/mocs_compilation.cpp

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/krecentfilesaction_test_autogen/mocs_compilation.cpp > CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.i

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/krecentfilesaction_test_autogen/mocs_compilation.cpp -o CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.s

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o: autotests/CMakeFiles/krecentfilesaction_test.dir/flags.make
autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o: /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/krecentfilesactiontest.cpp
autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o: autotests/CMakeFiles/krecentfilesaction_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o -MF CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o.d -o CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o -c /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/krecentfilesactiontest.cpp

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/krecentfilesactiontest.cpp > CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.i

autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests/krecentfilesactiontest.cpp -o CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.s

# Object files for target krecentfilesaction_test
krecentfilesaction_test_OBJECTS = \
"CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o"

# External object files for target krecentfilesaction_test
krecentfilesaction_test_EXTERNAL_OBJECTS =

bin/krecentfilesaction_test: autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesaction_test_autogen/mocs_compilation.cpp.o
bin/krecentfilesaction_test: autotests/CMakeFiles/krecentfilesaction_test.dir/krecentfilesactiontest.cpp.o
bin/krecentfilesaction_test: autotests/CMakeFiles/krecentfilesaction_test.dir/build.make
bin/krecentfilesaction_test: autotests/CMakeFiles/krecentfilesaction_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfigwidgets/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/krecentfilesaction_test"
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/krecentfilesaction_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
autotests/CMakeFiles/krecentfilesaction_test.dir/build: bin/krecentfilesaction_test
.PHONY : autotests/CMakeFiles/krecentfilesaction_test.dir/build

autotests/CMakeFiles/krecentfilesaction_test.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests && $(CMAKE_COMMAND) -P CMakeFiles/krecentfilesaction_test.dir/cmake_clean.cmake
.PHONY : autotests/CMakeFiles/krecentfilesaction_test.dir/clean

autotests/CMakeFiles/krecentfilesaction_test.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfigwidgets && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfigwidgets /home/szybet/kdesrc/frameworks/kconfigwidgets/autotests /home/szybet/kdesrc/build/frameworks/kconfigwidgets /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests /home/szybet/kdesrc/build/frameworks/kconfigwidgets/autotests/CMakeFiles/krecentfilesaction_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : autotests/CMakeFiles/krecentfilesaction_test.dir/depend

