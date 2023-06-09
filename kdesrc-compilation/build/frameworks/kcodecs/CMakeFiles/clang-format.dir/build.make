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
CMAKE_SOURCE_DIR = /home/szybet/kdesrc/frameworks/kcodecs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szybet/kdesrc/build/frameworks/kcodecs

# Utility rule file for clang-format.

# Include any custom commands dependencies for this target.
include CMakeFiles/clang-format.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clang-format.dir/progress.make

clang-format: CMakeFiles/clang-format.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/base45test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/base64benchmark.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/base64benchmark.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/codectest.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/codectest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/codectest.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/codectest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kcharsetstest.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kcharsetstest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kcharsetstest.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kcharsetstest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kemailaddresstest.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kemailaddresstest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kemailaddresstest.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kemailaddresstest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kencodingprobertest.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kencodingprobertest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kencodingprobertest.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kencodingprobertest.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/kusasciitextcodectest.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/kusasciitextcodectest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/rfc2047test.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/rfc2047test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/autotests/rfc2047test.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/autotests/rfc2047test.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets_p.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcharsets_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs_p.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecs_p.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase45.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase45.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase64.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase64.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase64.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsbase64.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsidentity.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsidentity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsidentity.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsidentity.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsqp.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsqp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsqp.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsqp.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsuuencode.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsuuencode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsuuencode.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kcodecsuuencode.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kemailaddress.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kemailaddress.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kemailaddress.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kemailaddress.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kencodingprober.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kencodingprober.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kencodingprober.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kencodingprober.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kusasciitextcodec.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kusasciitextcodec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/kusasciitextcodec.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/kusasciitextcodec.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/CharDistribution.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/CharDistribution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/CharDistribution.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/CharDistribution.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/ChineseGroupProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/ChineseGroupProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/ChineseGroupProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/ChineseGroupProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JapaneseGroupProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JapaneseGroupProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JapaneseGroupProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JapaneseGroupProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JpCntx.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JpCntx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JpCntx.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/JpCntx.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangBulgarianModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangBulgarianModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangCyrillicModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangCyrillicModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangGreekModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangGreekModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangHebrewModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangHebrewModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangHungarianModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangHungarianModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangThaiModel.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/LangThaiModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/UnicodeGroupProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/UnicodeGroupProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/UnicodeGroupProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/UnicodeGroupProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsBig5Prober.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsBig5Prober.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsBig5Prober.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsBig5Prober.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCharSetProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCharSetProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCharSetProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCharSetProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCodingStateMachine.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsCodingStateMachine.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCJPProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCJPProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCJPProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCJPProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCKRProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCKRProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCKRProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEUCKRProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscCharsetProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscCharsetProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscCharsetProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscCharsetProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscSM.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsEscSM.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsGB2312Prober.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsGB2312Prober.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsGB2312Prober.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsGB2312Prober.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsHebrewProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsHebrewProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsHebrewProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsHebrewProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsLatin1Prober.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsLatin1Prober.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsLatin1Prober.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsLatin1Prober.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSGroupProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSGroupProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSGroupProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSGroupProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSSM.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsMBCSSM.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsPkgInt.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsPkgInt.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCSGroupProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCSGroupProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCSGroupProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCSGroupProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCharSetProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCharSetProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCharSetProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSBCharSetProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSJISProber.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSJISProber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSJISProber.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsSJISProber.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsUniversalDetector.cpp..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsUniversalDetector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Formatting /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsUniversalDetector.h..."
	cd /home/szybet/kdesrc/frameworks/kcodecs && /sbin/clang-format -style=file -i /home/szybet/kdesrc/frameworks/kcodecs/src/probers/nsUniversalDetector.h
.PHONY : clang-format

# Rule to build all files generated by this target.
CMakeFiles/clang-format.dir/build: clang-format
.PHONY : CMakeFiles/clang-format.dir/build

CMakeFiles/clang-format.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clang-format.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clang-format.dir/clean

CMakeFiles/clang-format.dir/depend:
	cd /home/szybet/kdesrc/build/frameworks/kcodecs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szybet/kdesrc/frameworks/kcodecs /home/szybet/kdesrc/frameworks/kcodecs /home/szybet/kdesrc/build/frameworks/kcodecs /home/szybet/kdesrc/build/frameworks/kcodecs /home/szybet/kdesrc/build/frameworks/kcodecs/CMakeFiles/clang-format.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clang-format.dir/depend

