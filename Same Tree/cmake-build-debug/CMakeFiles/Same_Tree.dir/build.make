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
CMAKE_SOURCE_DIR = "/Users/wupeng/Desktop/algorithm/Same Tree"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Same_Tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Same_Tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Same_Tree.dir/flags.make

CMakeFiles/Same_Tree.dir/main.c.o: CMakeFiles/Same_Tree.dir/flags.make
CMakeFiles/Same_Tree.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Same_Tree.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Same_Tree.dir/main.c.o   -c "/Users/wupeng/Desktop/algorithm/Same Tree/main.c"

CMakeFiles/Same_Tree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Same_Tree.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/wupeng/Desktop/algorithm/Same Tree/main.c" > CMakeFiles/Same_Tree.dir/main.c.i

CMakeFiles/Same_Tree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Same_Tree.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/wupeng/Desktop/algorithm/Same Tree/main.c" -o CMakeFiles/Same_Tree.dir/main.c.s

CMakeFiles/Same_Tree.dir/main.c.o.requires:

.PHONY : CMakeFiles/Same_Tree.dir/main.c.o.requires

CMakeFiles/Same_Tree.dir/main.c.o.provides: CMakeFiles/Same_Tree.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Same_Tree.dir/build.make CMakeFiles/Same_Tree.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Same_Tree.dir/main.c.o.provides

CMakeFiles/Same_Tree.dir/main.c.o.provides.build: CMakeFiles/Same_Tree.dir/main.c.o


# Object files for target Same_Tree
Same_Tree_OBJECTS = \
"CMakeFiles/Same_Tree.dir/main.c.o"

# External object files for target Same_Tree
Same_Tree_EXTERNAL_OBJECTS =

Same_Tree: CMakeFiles/Same_Tree.dir/main.c.o
Same_Tree: CMakeFiles/Same_Tree.dir/build.make
Same_Tree: CMakeFiles/Same_Tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Same_Tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Same_Tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Same_Tree.dir/build: Same_Tree

.PHONY : CMakeFiles/Same_Tree.dir/build

CMakeFiles/Same_Tree.dir/requires: CMakeFiles/Same_Tree.dir/main.c.o.requires

.PHONY : CMakeFiles/Same_Tree.dir/requires

CMakeFiles/Same_Tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Same_Tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Same_Tree.dir/clean

CMakeFiles/Same_Tree.dir/depend:
	cd "/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wupeng/Desktop/algorithm/Same Tree" "/Users/wupeng/Desktop/algorithm/Same Tree" "/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug" "/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug" "/Users/wupeng/Desktop/algorithm/Same Tree/cmake-build-debug/CMakeFiles/Same_Tree.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Same_Tree.dir/depend

