# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wupeng/Desktop/algorithm/LongestCommonPrefix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LongestCommonPrefix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LongestCommonPrefix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LongestCommonPrefix.dir/flags.make

CMakeFiles/LongestCommonPrefix.dir/main.c.o: CMakeFiles/LongestCommonPrefix.dir/flags.make
CMakeFiles/LongestCommonPrefix.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LongestCommonPrefix.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LongestCommonPrefix.dir/main.c.o   -c /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/main.c

CMakeFiles/LongestCommonPrefix.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LongestCommonPrefix.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/main.c > CMakeFiles/LongestCommonPrefix.dir/main.c.i

CMakeFiles/LongestCommonPrefix.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LongestCommonPrefix.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/main.c -o CMakeFiles/LongestCommonPrefix.dir/main.c.s

CMakeFiles/LongestCommonPrefix.dir/main.c.o.requires:

.PHONY : CMakeFiles/LongestCommonPrefix.dir/main.c.o.requires

CMakeFiles/LongestCommonPrefix.dir/main.c.o.provides: CMakeFiles/LongestCommonPrefix.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/LongestCommonPrefix.dir/build.make CMakeFiles/LongestCommonPrefix.dir/main.c.o.provides.build
.PHONY : CMakeFiles/LongestCommonPrefix.dir/main.c.o.provides

CMakeFiles/LongestCommonPrefix.dir/main.c.o.provides.build: CMakeFiles/LongestCommonPrefix.dir/main.c.o


# Object files for target LongestCommonPrefix
LongestCommonPrefix_OBJECTS = \
"CMakeFiles/LongestCommonPrefix.dir/main.c.o"

# External object files for target LongestCommonPrefix
LongestCommonPrefix_EXTERNAL_OBJECTS =

LongestCommonPrefix: CMakeFiles/LongestCommonPrefix.dir/main.c.o
LongestCommonPrefix: CMakeFiles/LongestCommonPrefix.dir/build.make
LongestCommonPrefix: CMakeFiles/LongestCommonPrefix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LongestCommonPrefix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LongestCommonPrefix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LongestCommonPrefix.dir/build: LongestCommonPrefix

.PHONY : CMakeFiles/LongestCommonPrefix.dir/build

CMakeFiles/LongestCommonPrefix.dir/requires: CMakeFiles/LongestCommonPrefix.dir/main.c.o.requires

.PHONY : CMakeFiles/LongestCommonPrefix.dir/requires

CMakeFiles/LongestCommonPrefix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LongestCommonPrefix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LongestCommonPrefix.dir/clean

CMakeFiles/LongestCommonPrefix.dir/depend:
	cd /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wupeng/Desktop/algorithm/LongestCommonPrefix /Users/wupeng/Desktop/algorithm/LongestCommonPrefix /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug /Users/wupeng/Desktop/algorithm/LongestCommonPrefix/cmake-build-debug/CMakeFiles/LongestCommonPrefix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LongestCommonPrefix.dir/depend

