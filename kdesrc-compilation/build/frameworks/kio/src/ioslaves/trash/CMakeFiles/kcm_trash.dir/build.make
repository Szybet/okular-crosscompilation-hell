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
include src/ioslaves/trash/CMakeFiles/kcm_trash.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.make

# Include the progress variables for this target.
include src/ioslaves/trash/CMakeFiles/kcm_trash.dir/progress.make

# Include the compile flags for this target's objects.
include src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o: src/ioslaves/trash/kcm_trash_autogen/mocs_compilation.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kcm_trash_autogen/mocs_compilation.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kcm_trash_autogen/mocs_compilation.cpp > CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kcm_trash_autogen/mocs_compilation.cpp -o CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kcmtrash.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o -MF CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o.d -o CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kcmtrash.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/kcmtrash.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kcmtrash.cpp > CMakeFiles/kcm_trash.dir/kcmtrash.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/kcmtrash.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kcmtrash.cpp -o CMakeFiles/kcm_trash.dir/kcmtrash.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashimpl.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o -MF CMakeFiles/kcm_trash.dir/trashimpl.cpp.o.d -o CMakeFiles/kcm_trash.dir/trashimpl.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashimpl.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/trashimpl.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashimpl.cpp > CMakeFiles/kcm_trash.dir/trashimpl.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/trashimpl.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashimpl.cpp -o CMakeFiles/kcm_trash.dir/trashimpl.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/discspaceutil.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o -MF CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o.d -o CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/discspaceutil.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/discspaceutil.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/discspaceutil.cpp > CMakeFiles/kcm_trash.dir/discspaceutil.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/discspaceutil.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/discspaceutil.cpp -o CMakeFiles/kcm_trash.dir/discspaceutil.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashsizecache.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o -MF CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o.d -o CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashsizecache.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/trashsizecache.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashsizecache.cpp > CMakeFiles/kcm_trash.dir/trashsizecache.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/trashsizecache.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/trashsizecache.cpp -o CMakeFiles/kcm_trash.dir/trashsizecache.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o: /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kinterprocesslock.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o -MF CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o.d -o CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o -c /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kinterprocesslock.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kinterprocesslock.cpp > CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash/kinterprocesslock.cpp -o CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.s

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/flags.make
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o: src/ioslaves/trash/kiotrashdebug.cpp
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o -MF CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o.d -o CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o -c /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kiotrashdebug.cpp

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kiotrashdebug.cpp > CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.i

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/kiotrashdebug.cpp -o CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.s

# Object files for target kcm_trash
kcm_trash_OBJECTS = \
"CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o" \
"CMakeFiles/kcm_trash.dir/trashimpl.cpp.o" \
"CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o" \
"CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o" \
"CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o" \
"CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o"

# External object files for target kcm_trash
kcm_trash_EXTERNAL_OBJECTS =

bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcm_trash_autogen/mocs_compilation.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kcmtrash.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashimpl.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/discspaceutil.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/trashsizecache.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kinterprocesslock.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/kiotrashdebug.cpp.o
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/build.make
bin/kcm_trash.so: src/ioslaves/trash/CMakeFiles/kcm_trash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kio/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared module ../../../bin/kcm_trash.so"
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcm_trash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/ioslaves/trash/CMakeFiles/kcm_trash.dir/build: bin/kcm_trash.so
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash.dir/build

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash && $(CMAKE_COMMAND) -P CMakeFiles/kcm_trash.dir/cmake_clean.cmake
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash.dir/clean

src/ioslaves/trash/CMakeFiles/kcm_trash.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kio /home/szybet/kdesrc/frameworks/kio/src/ioslaves/trash /home/szybet/kdesrc/build/frameworks/kio /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash /home/szybet/kdesrc/build/frameworks/kio/src/ioslaves/trash/CMakeFiles/kcm_trash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/ioslaves/trash/CMakeFiles/kcm_trash.dir/depend

