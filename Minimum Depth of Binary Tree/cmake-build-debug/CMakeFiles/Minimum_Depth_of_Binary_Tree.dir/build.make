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
CMAKE_SOURCE_DIR = "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/flags.make

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/flags.make
CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o   -c "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/main.c"

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/main.c" > CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.i

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/main.c" -o CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.s

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.requires:

.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.requires

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.provides: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/build.make CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.provides.build
.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.provides

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.provides.build: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o


# Object files for target Minimum_Depth_of_Binary_Tree
Minimum_Depth_of_Binary_Tree_OBJECTS = \
"CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o"

# External object files for target Minimum_Depth_of_Binary_Tree
Minimum_Depth_of_Binary_Tree_EXTERNAL_OBJECTS =

Minimum_Depth_of_Binary_Tree: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o
Minimum_Depth_of_Binary_Tree: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/build.make
Minimum_Depth_of_Binary_Tree: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Minimum_Depth_of_Binary_Tree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/build: Minimum_Depth_of_Binary_Tree

.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/build

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/requires: CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/main.c.o.requires

.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/requires

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/clean

CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/depend:
	cd "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree" "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree" "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug" "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug" "/Users/wupeng/Desktop/algorithm/Minimum Depth of Binary Tree/cmake-build-debug/CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Minimum_Depth_of_Binary_Tree.dir/depend

