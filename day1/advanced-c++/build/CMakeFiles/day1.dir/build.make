# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ipmap/advent21/day1/advanced-c++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ipmap/advent21/day1/advanced-c++/build

# Include any dependencies generated for this target.
include CMakeFiles/day1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/day1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/day1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/day1.dir/flags.make

CMakeFiles/day1.dir/solve.o: CMakeFiles/day1.dir/flags.make
CMakeFiles/day1.dir/solve.o: ../solve.cpp
CMakeFiles/day1.dir/solve.o: CMakeFiles/day1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ipmap/advent21/day1/advanced-c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/day1.dir/solve.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/day1.dir/solve.o -MF CMakeFiles/day1.dir/solve.o.d -o CMakeFiles/day1.dir/solve.o -c /home/ipmap/advent21/day1/advanced-c++/solve.cpp

CMakeFiles/day1.dir/solve.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/day1.dir/solve.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ipmap/advent21/day1/advanced-c++/solve.cpp > CMakeFiles/day1.dir/solve.i

CMakeFiles/day1.dir/solve.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/day1.dir/solve.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ipmap/advent21/day1/advanced-c++/solve.cpp -o CMakeFiles/day1.dir/solve.s

# Object files for target day1
day1_OBJECTS = \
"CMakeFiles/day1.dir/solve.o"

# External object files for target day1
day1_EXTERNAL_OBJECTS =

day1: CMakeFiles/day1.dir/solve.o
day1: CMakeFiles/day1.dir/build.make
day1: CMakeFiles/day1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ipmap/advent21/day1/advanced-c++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable day1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/day1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/day1.dir/build: day1
.PHONY : CMakeFiles/day1.dir/build

CMakeFiles/day1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/day1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/day1.dir/clean

CMakeFiles/day1.dir/depend:
	cd /home/ipmap/advent21/day1/advanced-c++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ipmap/advent21/day1/advanced-c++ /home/ipmap/advent21/day1/advanced-c++ /home/ipmap/advent21/day1/advanced-c++/build /home/ipmap/advent21/day1/advanced-c++/build /home/ipmap/advent21/day1/advanced-c++/build/CMakeFiles/day1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/day1.dir/depend

