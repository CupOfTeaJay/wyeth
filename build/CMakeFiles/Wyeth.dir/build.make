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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cupofteajay/github/repos/wyeth

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cupofteajay/github/repos/wyeth/build

# Include any dependencies generated for this target.
include CMakeFiles/Wyeth.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Wyeth.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Wyeth.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Wyeth.dir/flags.make

CMakeFiles/Wyeth.dir/src/main.cpp.o: CMakeFiles/Wyeth.dir/flags.make
CMakeFiles/Wyeth.dir/src/main.cpp.o: /Users/cupofteajay/github/repos/wyeth/src/main.cpp
CMakeFiles/Wyeth.dir/src/main.cpp.o: CMakeFiles/Wyeth.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cupofteajay/github/repos/wyeth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Wyeth.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Wyeth.dir/src/main.cpp.o -MF CMakeFiles/Wyeth.dir/src/main.cpp.o.d -o CMakeFiles/Wyeth.dir/src/main.cpp.o -c /Users/cupofteajay/github/repos/wyeth/src/main.cpp

CMakeFiles/Wyeth.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Wyeth.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cupofteajay/github/repos/wyeth/src/main.cpp > CMakeFiles/Wyeth.dir/src/main.cpp.i

CMakeFiles/Wyeth.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Wyeth.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cupofteajay/github/repos/wyeth/src/main.cpp -o CMakeFiles/Wyeth.dir/src/main.cpp.s

# Object files for target Wyeth
Wyeth_OBJECTS = \
"CMakeFiles/Wyeth.dir/src/main.cpp.o"

# External object files for target Wyeth
Wyeth_EXTERNAL_OBJECTS =

Wyeth: CMakeFiles/Wyeth.dir/src/main.cpp.o
Wyeth: CMakeFiles/Wyeth.dir/build.make
Wyeth: include/HTTPLib/libHTTPLib.dylib
Wyeth: /opt/homebrew/Cellar/openssl@3/3.1.1_1/lib/libssl.dylib
Wyeth: /opt/homebrew/Cellar/openssl@3/3.1.1_1/lib/libcrypto.dylib
Wyeth: CMakeFiles/Wyeth.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cupofteajay/github/repos/wyeth/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Wyeth"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Wyeth.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Wyeth.dir/build: Wyeth
.PHONY : CMakeFiles/Wyeth.dir/build

CMakeFiles/Wyeth.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Wyeth.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Wyeth.dir/clean

CMakeFiles/Wyeth.dir/depend:
	cd /Users/cupofteajay/github/repos/wyeth/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cupofteajay/github/repos/wyeth /Users/cupofteajay/github/repos/wyeth /Users/cupofteajay/github/repos/wyeth/build /Users/cupofteajay/github/repos/wyeth/build /Users/cupofteajay/github/repos/wyeth/build/CMakeFiles/Wyeth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Wyeth.dir/depend

