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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kguiaddons

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kguiaddons

# Include any dependencies generated for this target.
include src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/compiler_depend.make

# Include the progress variables for this target.
include src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/progress.make

# Include the compile flags for this target's objects.
include src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/flags.make

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/flags.make
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o: src/geo-scheme-handler/kde-geo-uri-handler_autogen/mocs_compilation.cpp
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler/kde-geo-uri-handler_autogen/mocs_compilation.cpp

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler/kde-geo-uri-handler_autogen/mocs_compilation.cpp > CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.i

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler/kde-geo-uri-handler_autogen/mocs_compilation.cpp -o CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.s

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/flags.make
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o: /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/kgeourihandler.cpp
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o -MF CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o.d -o CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o -c /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/kgeourihandler.cpp

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/kgeourihandler.cpp > CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.i

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/kgeourihandler.cpp -o CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.s

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/flags.make
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o: /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/main.cpp
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o -MF CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o.d -o CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o -c /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/main.cpp

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kde-geo-uri-handler.dir/main.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/main.cpp > CMakeFiles/kde-geo-uri-handler.dir/main.cpp.i

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kde-geo-uri-handler.dir/main.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler/main.cpp -o CMakeFiles/kde-geo-uri-handler.dir/main.cpp.s

# Object files for target kde-geo-uri-handler
kde__geo__uri__handler_OBJECTS = \
"CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o" \
"CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o"

# External object files for target kde-geo-uri-handler
kde__geo__uri__handler_EXTERNAL_OBJECTS =

bin/kde-geo-uri-handler: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kde-geo-uri-handler_autogen/mocs_compilation.cpp.o
bin/kde-geo-uri-handler: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/kgeourihandler.cpp.o
bin/kde-geo-uri-handler: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/main.cpp.o
bin/kde-geo-uri-handler: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/build.make
bin/kde-geo-uri-handler: src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kguiaddons/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../../bin/kde-geo-uri-handler"
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kde-geo-uri-handler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/build: bin/kde-geo-uri-handler
.PHONY : src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/build

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler && $(CMAKE_COMMAND) -P CMakeFiles/kde-geo-uri-handler.dir/cmake_clean.cmake
.PHONY : src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/clean

src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kguiaddons && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kguiaddons /home/szybet/kdesrc/frameworks/kguiaddons/src/geo-scheme-handler /home/szybet/kdesrc/build/frameworks/kguiaddons /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler /home/szybet/kdesrc/build/frameworks/kguiaddons/src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/geo-scheme-handler/CMakeFiles/kde-geo-uri-handler.dir/depend

