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
CMAKE_SOURCE_DIR = /mnt/HDD/Project/Public/okulartry/kio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/HDD/Project/Public/okulartry/kio/build

# Include any dependencies generated for this target.
include src/kcms/proxy/CMakeFiles/kcm_proxy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kcms/proxy/CMakeFiles/kcm_proxy.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kcms/proxy/CMakeFiles/kcm_proxy.dir/progress.make

# Include the compile flags for this target's objects.
include src/kcms/proxy/CMakeFiles/kcm_proxy.dir/flags.make

src/kcms/proxy/ui_kproxydlg.h: /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_kproxydlg.h"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /usr/bin/cmake -DKDE_UIC_EXECUTABLE:FILEPATH=/home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/bin/uic -DKDE_UIC_FILE:FILEPATH=/mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.ui -DKDE_UIC_H_FILE:FILEPATH=/mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy/ui_kproxydlg.h -DKDE_UIC_BASENAME:STRING=kproxydlg -P /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/arm-kobo-linux-gnueabihf/sysroot/lib/cmake/KF5I18n/kf5i18nuic.cmake

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/flags.make
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o: src/kcms/proxy/kcm_proxy_autogen/mocs_compilation.cpp
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o -MF CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o -c /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy/kcm_proxy_autogen/mocs_compilation.cpp

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy/kcm_proxy_autogen/mocs_compilation.cpp > CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.i

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy/kcm_proxy_autogen/mocs_compilation.cpp -o CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.s

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/flags.make
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o: /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.cpp
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o -MF CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o.d -o CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o -c /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.cpp

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.cpp > CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.i

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy/kproxydlg.cpp -o CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.s

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/flags.make
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o: /mnt/HDD/Project/Public/okulartry/kio/src/kcms/ksaveioconfig.cpp
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o -MF CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o.d -o CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o -c /mnt/HDD/Project/Public/okulartry/kio/src/kcms/ksaveioconfig.cpp

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.i"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/HDD/Project/Public/okulartry/kio/src/kcms/ksaveioconfig.cpp > CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.i

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.s"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && /home/build/inkbox/compiled-binaries/arm-kobo-linux-gnueabihf/bin/arm-kobo-linux-gnueabihf-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/HDD/Project/Public/okulartry/kio/src/kcms/ksaveioconfig.cpp -o CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.s

# Object files for target kcm_proxy
kcm_proxy_OBJECTS = \
"CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o" \
"CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o"

# External object files for target kcm_proxy
kcm_proxy_EXTERNAL_OBJECTS =

bin/kcm_proxy.so: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kcm_proxy_autogen/mocs_compilation.cpp.o
bin/kcm_proxy.so: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/kproxydlg.cpp.o
bin/kcm_proxy.so: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/__/ksaveioconfig.cpp.o
bin/kcm_proxy.so: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/build.make
bin/kcm_proxy.so: src/kcms/proxy/CMakeFiles/kcm_proxy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/HDD/Project/Public/okulartry/kio/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module ../../../bin/kcm_proxy.so"
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcm_proxy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kcms/proxy/CMakeFiles/kcm_proxy.dir/build: bin/kcm_proxy.so
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy.dir/build

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/clean:
	cd /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy && $(CMAKE_COMMAND) -P CMakeFiles/kcm_proxy.dir/cmake_clean.cmake
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy.dir/clean

src/kcms/proxy/CMakeFiles/kcm_proxy.dir/depend: src/kcms/proxy/ui_kproxydlg.h
	cd /mnt/HDD/Project/Public/okulartry/kio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/HDD/Project/Public/okulartry/kio /mnt/HDD/Project/Public/okulartry/kio/src/kcms/proxy /mnt/HDD/Project/Public/okulartry/kio/build /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy /mnt/HDD/Project/Public/okulartry/kio/build/src/kcms/proxy/CMakeFiles/kcm_proxy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/kcms/proxy/CMakeFiles/kcm_proxy.dir/depend

