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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kdoctools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kdoctools

# Include any dependencies generated for this target.
include src/CMakeFiles/docbookl10nhelper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/docbookl10nhelper.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/docbookl10nhelper.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/docbookl10nhelper.dir/flags.make

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/flags.make
src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o: src/docbookl10nhelper_autogen/mocs_compilation.cpp
src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o -MF CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kdoctools/src/docbookl10nhelper_autogen/mocs_compilation.cpp

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kdoctools/src/docbookl10nhelper_autogen/mocs_compilation.cpp > CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.i

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kdoctools/src/docbookl10nhelper_autogen/mocs_compilation.cpp -o CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.s

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/flags.make
src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o: /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp
src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o -MF CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o.d -o CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o -c /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp > CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.i

src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kdoctools/src/docbookl10nhelper.cpp -o CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.s

src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/flags.make
src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o: src/loggingcategory.cpp
src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o: src/CMakeFiles/docbookl10nhelper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o -MF CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o.d -o CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o -c /home/szybet/kdesrc/build/frameworks/kdoctools/src/loggingcategory.cpp

src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kdoctools/src/loggingcategory.cpp > CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.i

src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kdoctools/src/loggingcategory.cpp -o CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.s

# Object files for target docbookl10nhelper
docbookl10nhelper_OBJECTS = \
"CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o" \
"CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o"

# External object files for target docbookl10nhelper
docbookl10nhelper_EXTERNAL_OBJECTS =

bin/docbookl10nhelper: src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper_autogen/mocs_compilation.cpp.o
bin/docbookl10nhelper: src/CMakeFiles/docbookl10nhelper.dir/docbookl10nhelper.cpp.o
bin/docbookl10nhelper: src/CMakeFiles/docbookl10nhelper.dir/loggingcategory.cpp.o
bin/docbookl10nhelper: src/CMakeFiles/docbookl10nhelper.dir/build.make
bin/docbookl10nhelper: src/CMakeFiles/docbookl10nhelper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kdoctools/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/docbookl10nhelper"
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/docbookl10nhelper.dir/link.txt --verbose=$(VERBOSE)
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && /usr/bin/docbookl10nhelper /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/usr/share/xml/docbook/xsl-stylesheets-1.79.2 /home/szybet/kdesrc/frameworks/kdoctools/src/customization/xsl /home/szybet/kdesrc/build/frameworks/kdoctools/src/customization/xsl

# Rule to build all files generated by this target.
src/CMakeFiles/docbookl10nhelper.dir/build: bin/docbookl10nhelper
.PHONY : src/CMakeFiles/docbookl10nhelper.dir/build

src/CMakeFiles/docbookl10nhelper.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools/src && $(CMAKE_COMMAND) -P CMakeFiles/docbookl10nhelper.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/docbookl10nhelper.dir/clean

src/CMakeFiles/docbookl10nhelper.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kdoctools && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kdoctools /home/szybet/kdesrc/frameworks/kdoctools/src /home/szybet/kdesrc/build/frameworks/kdoctools /home/szybet/kdesrc/build/frameworks/kdoctools/src /home/szybet/kdesrc/build/frameworks/kdoctools/src/CMakeFiles/docbookl10nhelper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/docbookl10nhelper.dir/depend

