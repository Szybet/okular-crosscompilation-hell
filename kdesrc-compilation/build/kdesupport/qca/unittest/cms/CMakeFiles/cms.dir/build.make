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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/kdesupport/qca

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/kdesupport/qca

# Include any dependencies generated for this target.
include unittest/cms/CMakeFiles/cms.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittest/cms/CMakeFiles/cms.dir/compiler_depend.make

# Include the progress variables for this target.
include unittest/cms/CMakeFiles/cms.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/cms/CMakeFiles/cms.dir/flags.make

unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o: unittest/cms/CMakeFiles/cms.dir/flags.make
unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o: unittest/cms/cms_autogen/mocs_compilation.cpp
unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o: unittest/cms/CMakeFiles/cms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o -MF CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms/cms_autogen/mocs_compilation.cpp

unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms/cms_autogen/mocs_compilation.cpp > CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.i

unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms/cms_autogen/mocs_compilation.cpp -o CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.s

unittest/cms/CMakeFiles/cms.dir/cms.cpp.o: unittest/cms/CMakeFiles/cms.dir/flags.make
unittest/cms/CMakeFiles/cms.dir/cms.cpp.o: /home/szybet/kdesrc/kdesupport/qca/unittest/cms/cms.cpp
unittest/cms/CMakeFiles/cms.dir/cms.cpp.o: unittest/cms/CMakeFiles/cms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittest/cms/CMakeFiles/cms.dir/cms.cpp.o"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittest/cms/CMakeFiles/cms.dir/cms.cpp.o -MF CMakeFiles/cms.dir/cms.cpp.o.d -o CMakeFiles/cms.dir/cms.cpp.o -c /home/szybet/kdesrc/kdesupport/qca/unittest/cms/cms.cpp

unittest/cms/CMakeFiles/cms.dir/cms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cms.dir/cms.cpp.i"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/kdesupport/qca/unittest/cms/cms.cpp > CMakeFiles/cms.dir/cms.cpp.i

unittest/cms/CMakeFiles/cms.dir/cms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cms.dir/cms.cpp.s"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/kdesupport/qca/unittest/cms/cms.cpp -o CMakeFiles/cms.dir/cms.cpp.s

# Object files for target cms
cms_OBJECTS = \
"CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cms.dir/cms.cpp.o"

# External object files for target cms
cms_EXTERNAL_OBJECTS =

bin/cms: unittest/cms/CMakeFiles/cms.dir/cms_autogen/mocs_compilation.cpp.o
bin/cms: unittest/cms/CMakeFiles/cms.dir/cms.cpp.o
bin/cms: unittest/cms/CMakeFiles/cms.dir/build.make
bin/cms: lib/libqca-qt5.so.2.3.6
bin/cms: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Test.so.5.15.2
bin/cms: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/lib/libssl.so
bin/cms: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/lib/libcrypto.so
bin/cms: /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/libQt5Core.so.5.15.2
bin/cms: unittest/cms/CMakeFiles/cms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/kdesupport/qca/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/cms"
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/cms/CMakeFiles/cms.dir/build: bin/cms
.PHONY : unittest/cms/CMakeFiles/cms.dir/build

unittest/cms/CMakeFiles/cms.dir/clean:
	cd /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms && $(CMAKE_COMMAND) -P CMakeFiles/cms.dir/cmake_clean.cmake
.PHONY : unittest/cms/CMakeFiles/cms.dir/clean

unittest/cms/CMakeFiles/cms.dir/depend:
	cd /home/szybet/kdesrc/build/kdesupport/qca && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/kdesupport/qca /home/szybet/kdesrc/kdesupport/qca/unittest/cms /home/szybet/kdesrc/build/kdesupport/qca /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms /home/szybet/kdesrc/build/kdesupport/qca/unittest/cms/CMakeFiles/cms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/cms/CMakeFiles/cms.dir/depend

