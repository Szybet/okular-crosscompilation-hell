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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kwidgetsaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kwidgetsaddons

# Include any dependencies generated for this target.
include tests/CMakeFiles/kmessagewidgettest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/kmessagewidgettest.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/kmessagewidgettest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/kmessagewidgettest.dir/flags.make

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/kmessagewidgettest.dir/flags.make
tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o: tests/kmessagewidgettest_autogen/mocs_compilation.cpp
tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o: tests/CMakeFiles/kmessagewidgettest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kmessagewidgettest_autogen/mocs_compilation.cpp

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kmessagewidgettest_autogen/mocs_compilation.cpp > CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.i

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/kmessagewidgettest_autogen/mocs_compilation.cpp -o CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.s

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o: tests/CMakeFiles/kmessagewidgettest.dir/flags.make
tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o: /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kmessagewidgettest.cpp
tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o: tests/CMakeFiles/kmessagewidgettest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o -MF CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o.d -o CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o -c /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kmessagewidgettest.cpp

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kmessagewidgettest.cpp > CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.i

tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests/kmessagewidgettest.cpp -o CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.s

# Object files for target kmessagewidgettest
kmessagewidgettest_OBJECTS = \
"CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o"

# External object files for target kmessagewidgettest
kmessagewidgettest_EXTERNAL_OBJECTS =

bin/kmessagewidgettest: tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest_autogen/mocs_compilation.cpp.o
bin/kmessagewidgettest: tests/CMakeFiles/kmessagewidgettest.dir/kmessagewidgettest.cpp.o
bin/kmessagewidgettest: tests/CMakeFiles/kmessagewidgettest.dir/build.make
bin/kmessagewidgettest: tests/CMakeFiles/kmessagewidgettest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kwidgetsaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/kmessagewidgettest"
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kmessagewidgettest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/kmessagewidgettest.dir/build: bin/kmessagewidgettest
.PHONY : tests/CMakeFiles/kmessagewidgettest.dir/build

tests/CMakeFiles/kmessagewidgettest.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests && $(CMAKE_COMMAND) -P CMakeFiles/kmessagewidgettest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/kmessagewidgettest.dir/clean

tests/CMakeFiles/kmessagewidgettest.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kwidgetsaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kwidgetsaddons /home/szybet/kdesrc/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests /home/szybet/kdesrc/build/frameworks/kwidgetsaddons/tests/CMakeFiles/kmessagewidgettest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/kmessagewidgettest.dir/depend

