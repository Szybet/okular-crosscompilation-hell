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
include src/CMakeFiles/kauth_helper_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/kauth_helper_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/kauth_helper_plugin.dir/flags.make

src/kf5authadaptor.moc: src/kf5authadaptor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating kf5authadaptor.moc"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/moc @/home/szybet/kdesrc/build/frameworks/kauth/src/kf5authadaptor.moc_parameters

src/kf5authadaptor.cpp: /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/org.kde.kf5auth.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating kf5authadaptor.cpp, kf5authadaptor.h"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/qdbusxml2cpp -m -a kf5authadaptor -i backends/dbus/DBusHelperProxy.h -l KAuth::DBusHelperProxy /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/org.kde.kf5auth.xml

src/kf5authadaptor.h: src/kf5authadaptor.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate src/kf5authadaptor.h

src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/flags.make
src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o: src/kauth_helper_plugin_autogen/mocs_compilation.cpp
src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_helper_plugin_autogen/mocs_compilation.cpp

src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_helper_plugin_autogen/mocs_compilation.cpp > CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.i

src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kauth_helper_plugin_autogen/mocs_compilation.cpp -o CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.s

src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/flags.make
src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/DBusHelperProxy.cpp
src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o -MF CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o.d -o CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/DBusHelperProxy.cpp

src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/DBusHelperProxy.cpp > CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.i

src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/backends/dbus/DBusHelperProxy.cpp -o CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.s

src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/flags.make
src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o: src/kf5authadaptor.cpp
src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o: src/kf5authadaptor.moc
src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o -MF CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o.d -o CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kf5authadaptor.cpp

src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kf5authadaptor.cpp > CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.i

src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kf5authadaptor.cpp -o CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.s

src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/flags.make
src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o: /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp
src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o -MF CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o.d -o CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o -c /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp

src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp > CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.i

src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kauth/src/HelperProxy.cpp -o CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.s

src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/flags.make
src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o: src/kauthdebug.cpp
src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o: src/CMakeFiles/kauth_helper_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o -MF CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o.d -o CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o -c /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp

src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp > CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.i

src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kauth/src/kauthdebug.cpp -o CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.s

# Object files for target kauth_helper_plugin
kauth_helper_plugin_OBJECTS = \
"CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o" \
"CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o" \
"CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o" \
"CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o"

# External object files for target kauth_helper_plugin
kauth_helper_plugin_EXTERNAL_OBJECTS =

bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/kauth_helper_plugin_autogen/mocs_compilation.cpp.o
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/backends/dbus/DBusHelperProxy.cpp.o
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/kf5authadaptor.cpp.o
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/HelperProxy.cpp.o
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/kauthdebug.cpp.o
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/build.make
bin/kauth_helper_plugin.so: src/CMakeFiles/kauth_helper_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kauth/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared module ../bin/kauth_helper_plugin.so"
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kauth_helper_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/kauth_helper_plugin.dir/build: bin/kauth_helper_plugin.so
.PHONY : src/CMakeFiles/kauth_helper_plugin.dir/build

src/CMakeFiles/kauth_helper_plugin.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kauth/src && $(CMAKE_COMMAND) -P CMakeFiles/kauth_helper_plugin.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/kauth_helper_plugin.dir/clean

src/CMakeFiles/kauth_helper_plugin.dir/depend: src/kf5authadaptor.cpp
src/CMakeFiles/kauth_helper_plugin.dir/depend: src/kf5authadaptor.h
src/CMakeFiles/kauth_helper_plugin.dir/depend: src/kf5authadaptor.moc
	cd /home/szybet/kdesrc/build/frameworks/kauth && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kauth /home/szybet/kdesrc/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth /home/szybet/kdesrc/build/frameworks/kauth/src /home/szybet/kdesrc/build/frameworks/kauth/src/CMakeFiles/kauth_helper_plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/kauth_helper_plugin.dir/depend

