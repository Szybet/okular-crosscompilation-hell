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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kauth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kauth

# Include any dependencies generated for this target.
include src/CMakeFiles/kauth_backend_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/kauth_backend_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/kauth_backend_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/kauth_backend_plugin.dir/flags.make

src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/flags.make
src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o: src/kauth_backend_plugin_autogen/mocs_compilation.cpp
src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_backend_plugin_autogen/mocs_compilation.cpp

src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_backend_plugin_autogen/mocs_compilation.cpp > CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.i

src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_backend_plugin_autogen/mocs_compilation.cpp -o CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.s

src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/flags.make
src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/backends/polkit-1/Polkit1Backend.cpp
src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o -MF CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o.d -o CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/backends/polkit-1/Polkit1Backend.cpp

src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/backends/polkit-1/Polkit1Backend.cpp > CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.i

src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/backends/polkit-1/Polkit1Backend.cpp -o CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.s

src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/flags.make
src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp
src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o -MF CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o.d -o CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp

src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp > CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.i

src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/AuthBackend.cpp -o CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.s

src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/flags.make
src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o: src/kauthdebug.cpp
src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o: src/CMakeFiles/kauth_backend_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o -MF CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o.d -o CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp

src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp > CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.i

src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp -o CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.s

# Object files for target kauth_backend_plugin
kauth_backend_plugin_OBJECTS = \
"CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o" \
"CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o" \
"CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o"

# External object files for target kauth_backend_plugin
kauth_backend_plugin_EXTERNAL_OBJECTS =

bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/kauth_backend_plugin_autogen/mocs_compilation.cpp.o
bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/backends/polkit-1/Polkit1Backend.cpp.o
bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/AuthBackend.cpp.o
bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/kauthdebug.cpp.o
bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/build.make
bin/kauth_backend_plugin.so: /mnt/HDD/Project/Public/okulartry/okular-things/lib/libpolkit-qt5-core-1.so
bin/kauth_backend_plugin.so: src/CMakeFiles/kauth_backend_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module ../bin/kauth_backend_plugin.so"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kauth_backend_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/kauth_backend_plugin.dir/build: bin/kauth_backend_plugin.so
.PHONY : src/CMakeFiles/kauth_backend_plugin.dir/build

src/CMakeFiles/kauth_backend_plugin.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -P CMakeFiles/kauth_backend_plugin.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/kauth_backend_plugin.dir/clean

src/CMakeFiles/kauth_backend_plugin.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kauth && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kauth /home/szybet/kdesrc/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth /home/szybet/kdesrc/build/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth/src/CMakeFiles/kauth_backend_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/kauth_backend_plugin.dir/depend

