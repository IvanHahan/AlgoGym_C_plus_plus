# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /Users/UnicornKing/CLionProjects/AlgoGym

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AlgoGym.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AlgoGym.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlgoGym.dir/flags.make

CMakeFiles/AlgoGym.dir/main.cpp.o: CMakeFiles/AlgoGym.dir/flags.make
CMakeFiles/AlgoGym.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AlgoGym.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgoGym.dir/main.cpp.o -c /Users/UnicornKing/CLionProjects/AlgoGym/main.cpp

CMakeFiles/AlgoGym.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoGym.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/UnicornKing/CLionProjects/AlgoGym/main.cpp > CMakeFiles/AlgoGym.dir/main.cpp.i

CMakeFiles/AlgoGym.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoGym.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/UnicornKing/CLionProjects/AlgoGym/main.cpp -o CMakeFiles/AlgoGym.dir/main.cpp.s

CMakeFiles/AlgoGym.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AlgoGym.dir/main.cpp.o.requires

CMakeFiles/AlgoGym.dir/main.cpp.o.provides: CMakeFiles/AlgoGym.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AlgoGym.dir/build.make CMakeFiles/AlgoGym.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AlgoGym.dir/main.cpp.o.provides

CMakeFiles/AlgoGym.dir/main.cpp.o.provides.build: CMakeFiles/AlgoGym.dir/main.cpp.o


CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o: CMakeFiles/AlgoGym.dir/flags.make
CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o: ../timetable/timetable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o -c /Users/UnicornKing/CLionProjects/AlgoGym/timetable/timetable.cpp

CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/UnicornKing/CLionProjects/AlgoGym/timetable/timetable.cpp > CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.i

CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/UnicornKing/CLionProjects/AlgoGym/timetable/timetable.cpp -o CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.s

CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.requires:

.PHONY : CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.requires

CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.provides: CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.requires
	$(MAKE) -f CMakeFiles/AlgoGym.dir/build.make CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.provides.build
.PHONY : CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.provides

CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.provides.build: CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o


CMakeFiles/AlgoGym.dir/salad/salad.cpp.o: CMakeFiles/AlgoGym.dir/flags.make
CMakeFiles/AlgoGym.dir/salad/salad.cpp.o: ../salad/salad.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AlgoGym.dir/salad/salad.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AlgoGym.dir/salad/salad.cpp.o -c /Users/UnicornKing/CLionProjects/AlgoGym/salad/salad.cpp

CMakeFiles/AlgoGym.dir/salad/salad.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AlgoGym.dir/salad/salad.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/UnicornKing/CLionProjects/AlgoGym/salad/salad.cpp > CMakeFiles/AlgoGym.dir/salad/salad.cpp.i

CMakeFiles/AlgoGym.dir/salad/salad.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AlgoGym.dir/salad/salad.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/UnicornKing/CLionProjects/AlgoGym/salad/salad.cpp -o CMakeFiles/AlgoGym.dir/salad/salad.cpp.s

CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.requires:

.PHONY : CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.requires

CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.provides: CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.requires
	$(MAKE) -f CMakeFiles/AlgoGym.dir/build.make CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.provides.build
.PHONY : CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.provides

CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.provides.build: CMakeFiles/AlgoGym.dir/salad/salad.cpp.o


# Object files for target AlgoGym
AlgoGym_OBJECTS = \
"CMakeFiles/AlgoGym.dir/main.cpp.o" \
"CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o" \
"CMakeFiles/AlgoGym.dir/salad/salad.cpp.o"

# External object files for target AlgoGym
AlgoGym_EXTERNAL_OBJECTS =

AlgoGym: CMakeFiles/AlgoGym.dir/main.cpp.o
AlgoGym: CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o
AlgoGym: CMakeFiles/AlgoGym.dir/salad/salad.cpp.o
AlgoGym: CMakeFiles/AlgoGym.dir/build.make
AlgoGym: CMakeFiles/AlgoGym.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable AlgoGym"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlgoGym.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlgoGym.dir/build: AlgoGym

.PHONY : CMakeFiles/AlgoGym.dir/build

CMakeFiles/AlgoGym.dir/requires: CMakeFiles/AlgoGym.dir/main.cpp.o.requires
CMakeFiles/AlgoGym.dir/requires: CMakeFiles/AlgoGym.dir/timetable/timetable.cpp.o.requires
CMakeFiles/AlgoGym.dir/requires: CMakeFiles/AlgoGym.dir/salad/salad.cpp.o.requires

.PHONY : CMakeFiles/AlgoGym.dir/requires

CMakeFiles/AlgoGym.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlgoGym.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlgoGym.dir/clean

CMakeFiles/AlgoGym.dir/depend:
	cd /Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/UnicornKing/CLionProjects/AlgoGym /Users/UnicornKing/CLionProjects/AlgoGym /Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug /Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug /Users/UnicornKing/CLionProjects/AlgoGym/cmake-build-debug/CMakeFiles/AlgoGym.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AlgoGym.dir/depend

