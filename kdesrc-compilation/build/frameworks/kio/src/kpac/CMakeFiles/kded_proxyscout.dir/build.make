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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kio

# Include any dependencies generated for this target.
include src/kpac/CMakeFiles/kded_proxyscout.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kpac/CMakeFiles/kded_proxyscout.dir/progress.make

# Include the compile flags for this target's objects.
include src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make

src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o: src/kpac/kded_proxyscout_autogen/mocs_compilation.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kded_proxyscout_autogen/mocs_compilation.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kded_proxyscout_autogen/mocs_compilation.cpp > CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kded_proxyscout_autogen/mocs_compilation.cpp -o CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.s

src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpac/proxyscout.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o -MF CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpac/proxyscout.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpac/proxyscout.cpp > CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpac/proxyscout.cpp -o CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.s

src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpac/script.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o -MF CMakeFiles/kded_proxyscout.dir/script.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/script.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpac/script.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/script.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpac/script.cpp > CMakeFiles/kded_proxyscout.dir/script.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/script.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpac/script.cpp -o CMakeFiles/kded_proxyscout.dir/script.cpp.s

src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpac/downloader.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o -MF CMakeFiles/kded_proxyscout.dir/downloader.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/downloader.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpac/downloader.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/downloader.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpac/downloader.cpp > CMakeFiles/kded_proxyscout.dir/downloader.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/downloader.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpac/downloader.cpp -o CMakeFiles/kded_proxyscout.dir/downloader.cpp.s

src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/kpac/discovery.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o -MF CMakeFiles/kded_proxyscout.dir/discovery.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/discovery.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/kpac/discovery.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/discovery.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/kpac/discovery.cpp > CMakeFiles/kded_proxyscout.dir/discovery.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/discovery.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/kpac/discovery.cpp -o CMakeFiles/kded_proxyscout.dir/discovery.cpp.s

src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/flags.make
src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o: src/kpac/kio_kpac_debug.cpp
src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o: src/kpac/CMakeFiles/kded_proxyscout.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o -MF CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o.d -o CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kio_kpac_debug.cpp

src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kio_kpac_debug.cpp > CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.i

src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/kpac/kio_kpac_debug.cpp -o CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.s

# Object files for target kded_proxyscout
kded_proxyscout_OBJECTS = \
"CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o" \
"CMakeFiles/kded_proxyscout.dir/script.cpp.o" \
"CMakeFiles/kded_proxyscout.dir/downloader.cpp.o" \
"CMakeFiles/kded_proxyscout.dir/discovery.cpp.o" \
"CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o"

# External object files for target kded_proxyscout
kded_proxyscout_EXTERNAL_OBJECTS =

bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/kded_proxyscout_autogen/mocs_compilation.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/proxyscout.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/script.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/downloader.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/discovery.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/kio_kpac_debug.cpp.o
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/build.make
bin/kf5/kded/proxyscout.so: src/kpac/CMakeFiles/kded_proxyscout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared module ../../bin/kf5/kded/proxyscout.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kded_proxyscout.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kpac/CMakeFiles/kded_proxyscout.dir/build: bin/kf5/kded/proxyscout.so
.PHONY : src/kpac/CMakeFiles/kded_proxyscout.dir/build

src/kpac/CMakeFiles/kded_proxyscout.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/kpac && $(CMAKE_COMMAND) -P CMakeFiles/kded_proxyscout.dir/cmake_clean.cmake
.PHONY : src/kpac/CMakeFiles/kded_proxyscout.dir/clean

src/kpac/CMakeFiles/kded_proxyscout.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/kpac /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/kpac /home/szybet/kdesrc/build/frameworks/kio/src/kpac/CMakeFiles/kded_proxyscout.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kpac/CMakeFiles/kded_proxyscout.dir/depend

