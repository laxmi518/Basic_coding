# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_SOURCE_DIR = /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gts_challenge_lax.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gts_challenge_lax.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gts_challenge_lax.dir/flags.make

CMakeFiles/gts_challenge_lax.dir/main.cpp.o: CMakeFiles/gts_challenge_lax.dir/flags.make
CMakeFiles/gts_challenge_lax.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gts_challenge_lax.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gts_challenge_lax.dir/main.cpp.o -c /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/main.cpp

CMakeFiles/gts_challenge_lax.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gts_challenge_lax.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/main.cpp > CMakeFiles/gts_challenge_lax.dir/main.cpp.i

CMakeFiles/gts_challenge_lax.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gts_challenge_lax.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/main.cpp -o CMakeFiles/gts_challenge_lax.dir/main.cpp.s

CMakeFiles/gts_challenge_lax.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/gts_challenge_lax.dir/main.cpp.o.requires

CMakeFiles/gts_challenge_lax.dir/main.cpp.o.provides: CMakeFiles/gts_challenge_lax.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/gts_challenge_lax.dir/build.make CMakeFiles/gts_challenge_lax.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/gts_challenge_lax.dir/main.cpp.o.provides

CMakeFiles/gts_challenge_lax.dir/main.cpp.o.provides.build: CMakeFiles/gts_challenge_lax.dir/main.cpp.o


# Object files for target gts_challenge_lax
gts_challenge_lax_OBJECTS = \
"CMakeFiles/gts_challenge_lax.dir/main.cpp.o"

# External object files for target gts_challenge_lax
gts_challenge_lax_EXTERNAL_OBJECTS =

gts_challenge_lax: CMakeFiles/gts_challenge_lax.dir/main.cpp.o
gts_challenge_lax: CMakeFiles/gts_challenge_lax.dir/build.make
gts_challenge_lax: CMakeFiles/gts_challenge_lax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gts_challenge_lax"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gts_challenge_lax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gts_challenge_lax.dir/build: gts_challenge_lax

.PHONY : CMakeFiles/gts_challenge_lax.dir/build

CMakeFiles/gts_challenge_lax.dir/requires: CMakeFiles/gts_challenge_lax.dir/main.cpp.o.requires

.PHONY : CMakeFiles/gts_challenge_lax.dir/requires

CMakeFiles/gts_challenge_lax.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gts_challenge_lax.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gts_challenge_lax.dir/clean

CMakeFiles/gts_challenge_lax.dir/depend:
	cd /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug /Users/laxmikadariya/Documents/coding/C++/gts_challenge_lax/cmake-build-debug/CMakeFiles/gts_challenge_lax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gts_challenge_lax.dir/depend

