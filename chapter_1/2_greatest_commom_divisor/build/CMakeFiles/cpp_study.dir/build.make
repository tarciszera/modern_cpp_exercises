# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tarcis/c++/chapter_1/2_greatest_commom_divisor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build

# Include any dependencies generated for this target.
include CMakeFiles/cpp_study.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_study.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_study.dir/flags.make

CMakeFiles/cpp_study.dir/exec.cpp.o: CMakeFiles/cpp_study.dir/flags.make
CMakeFiles/cpp_study.dir/exec.cpp.o: ../exec.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_study.dir/exec.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_study.dir/exec.cpp.o -c /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/exec.cpp

CMakeFiles/cpp_study.dir/exec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_study.dir/exec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/exec.cpp > CMakeFiles/cpp_study.dir/exec.cpp.i

CMakeFiles/cpp_study.dir/exec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_study.dir/exec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/exec.cpp -o CMakeFiles/cpp_study.dir/exec.cpp.s

# Object files for target cpp_study
cpp_study_OBJECTS = \
"CMakeFiles/cpp_study.dir/exec.cpp.o"

# External object files for target cpp_study
cpp_study_EXTERNAL_OBJECTS =

cpp_study: CMakeFiles/cpp_study.dir/exec.cpp.o
cpp_study: CMakeFiles/cpp_study.dir/build.make
cpp_study: CMakeFiles/cpp_study.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpp_study"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_study.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_study.dir/build: cpp_study

.PHONY : CMakeFiles/cpp_study.dir/build

CMakeFiles/cpp_study.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_study.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_study.dir/clean

CMakeFiles/cpp_study.dir/depend:
	cd /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tarcis/c++/chapter_1/2_greatest_commom_divisor /home/tarcis/c++/chapter_1/2_greatest_commom_divisor /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build /home/tarcis/c++/chapter_1/2_greatest_commom_divisor/build/CMakeFiles/cpp_study.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_study.dir/depend
