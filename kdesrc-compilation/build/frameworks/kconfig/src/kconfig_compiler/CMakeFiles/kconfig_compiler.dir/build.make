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
include src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/progress.make

# Include the compile flags for this target's objects.
include src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o: src/kconfig_compiler/kconfig_compiler_autogen/mocs_compilation.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o -c /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler_autogen/mocs_compilation.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler_autogen/mocs_compilation.cpp > CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler_autogen/mocs_compilation.cpp -o CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigParameters.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o -MF CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigParameters.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigParameters.cpp > CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigParameters.cpp -o CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigCodeGeneratorBase.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o -MF CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigCodeGeneratorBase.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigCodeGeneratorBase.cpp > CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigCodeGeneratorBase.cpp -o CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigHeaderGenerator.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o -MF CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigHeaderGenerator.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigHeaderGenerator.cpp > CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigHeaderGenerator.cpp -o CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigSourceGenerator.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o -MF CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigSourceGenerator.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigSourceGenerator.cpp > CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigSourceGenerator.cpp -o CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigXmlParser.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o -MF CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigXmlParser.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigXmlParser.cpp > CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/KConfigXmlParser.cpp -o CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.s

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/flags.make
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o: /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler.cpp
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o -MF CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o.d -o CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o -c /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler.cpp

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.i"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler.cpp > CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.i

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.s"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler/kconfig_compiler.cpp -o CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.s

# Object files for target kconfig_compiler
kconfig_compiler_OBJECTS = \
"CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o" \
"CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o"

# External object files for target kconfig_compiler
kconfig_compiler_EXTERNAL_OBJECTS =

bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler_autogen/mocs_compilation.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigParameters.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigCodeGeneratorBase.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigHeaderGenerator.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigSourceGenerator.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/KConfigXmlParser.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/kconfig_compiler.cpp.o
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/build.make
bin/kconfig_compiler_kf5: src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/szybet/kdesrc/build/frameworks/kconfig/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ../../bin/kconfig_compiler_kf5"
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kconfig_compiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/build: bin/kconfig_compiler_kf5
.PHONY : src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/build

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/clean:
	cd /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler && $(CMAKE_COMMAND) -P CMakeFiles/kconfig_compiler.dir/cmake_clean.cmake
.PHONY : src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/clean

src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kconfig && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kconfig /home/szybet/kdesrc/frameworks/kconfig/src/kconfig_compiler /home/szybet/kdesrc/build/frameworks/kconfig /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler /home/szybet/kdesrc/build/frameworks/kconfig/src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kconfig_compiler/CMakeFiles/kconfig_compiler.dir/depend

