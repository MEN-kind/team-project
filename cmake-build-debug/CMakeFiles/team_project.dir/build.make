# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jeremias.BRAUN\CLionProjects\team-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/team_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/team_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/team_project.dir/flags.make

CMakeFiles/team_project.dir/main.cpp.obj: CMakeFiles/team_project.dir/flags.make
CMakeFiles/team_project.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/team_project.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\team_project.dir\main.cpp.obj -c C:\Users\Jeremias.BRAUN\CLionProjects\team-project\main.cpp

CMakeFiles/team_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/team_project.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jeremias.BRAUN\CLionProjects\team-project\main.cpp > CMakeFiles\team_project.dir\main.cpp.i

CMakeFiles/team_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/team_project.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jeremias.BRAUN\CLionProjects\team-project\main.cpp -o CMakeFiles\team_project.dir\main.cpp.s

# Object files for target team_project
team_project_OBJECTS = \
"CMakeFiles/team_project.dir/main.cpp.obj"

# External object files for target team_project
team_project_EXTERNAL_OBJECTS =

team_project.exe: CMakeFiles/team_project.dir/main.cpp.obj
team_project.exe: CMakeFiles/team_project.dir/build.make
team_project.exe: CMakeFiles/team_project.dir/linklibs.rsp
team_project.exe: CMakeFiles/team_project.dir/objects1.rsp
team_project.exe: CMakeFiles/team_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable team_project.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\team_project.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/team_project.dir/build: team_project.exe

.PHONY : CMakeFiles/team_project.dir/build

CMakeFiles/team_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\team_project.dir\cmake_clean.cmake
.PHONY : CMakeFiles/team_project.dir/clean

CMakeFiles/team_project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jeremias.BRAUN\CLionProjects\team-project C:\Users\Jeremias.BRAUN\CLionProjects\team-project C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug C:\Users\Jeremias.BRAUN\CLionProjects\team-project\cmake-build-debug\CMakeFiles\team_project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/team_project.dir/depend

