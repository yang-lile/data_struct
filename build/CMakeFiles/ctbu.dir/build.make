# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lilua\Desktop\课程设计\ctbu_DS_module

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build

# Include any dependencies generated for this target.
include CMakeFiles/ctbu.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ctbu.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ctbu.dir/flags.make

CMakeFiles/ctbu.dir/ctbu.cpp.obj: CMakeFiles/ctbu.dir/flags.make
CMakeFiles/ctbu.dir/ctbu.cpp.obj: ../ctbu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ctbu.dir/ctbu.cpp.obj"
	C:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ctbu.dir\ctbu.cpp.obj -c C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\ctbu.cpp

CMakeFiles/ctbu.dir/ctbu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ctbu.dir/ctbu.cpp.i"
	C:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\ctbu.cpp > CMakeFiles\ctbu.dir\ctbu.cpp.i

CMakeFiles/ctbu.dir/ctbu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ctbu.dir/ctbu.cpp.s"
	C:\x86_64-8.1.0-release-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\ctbu.cpp -o CMakeFiles\ctbu.dir\ctbu.cpp.s

# Object files for target ctbu
ctbu_OBJECTS = \
"CMakeFiles/ctbu.dir/ctbu.cpp.obj"

# External object files for target ctbu
ctbu_EXTERNAL_OBJECTS =

libctbu.a: CMakeFiles/ctbu.dir/ctbu.cpp.obj
libctbu.a: CMakeFiles/ctbu.dir/build.make
libctbu.a: CMakeFiles/ctbu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libctbu.a"
	$(CMAKE_COMMAND) -P CMakeFiles\ctbu.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ctbu.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ctbu.dir/build: libctbu.a

.PHONY : CMakeFiles/ctbu.dir/build

CMakeFiles/ctbu.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ctbu.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ctbu.dir/clean

CMakeFiles/ctbu.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lilua\Desktop\课程设计\ctbu_DS_module C:\Users\lilua\Desktop\课程设计\ctbu_DS_module C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build C:\Users\lilua\Desktop\课程设计\ctbu_DS_module\build\CMakeFiles\ctbu.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ctbu.dir/depend

