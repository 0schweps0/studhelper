# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = D:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = D:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\github\studhelper\untitled52

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug

# Utility rule file for untitled52_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/untitled52_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled52_autogen.dir/progress.make

CMakeFiles/untitled52_autogen: untitled52_autogen/timestamp

untitled52_autogen/timestamp: D:/msys64/mingw64/share/qt6/bin/moc.exe
untitled52_autogen/timestamp: D:/msys64/mingw64/share/qt6/bin/uic.exe
untitled52_autogen/timestamp: CMakeFiles/untitled52_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target untitled52"
	D:\msys64\mingw64\bin\cmake.exe -E cmake_autogen D:/github/studhelper/untitled52/build/Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug/CMakeFiles/untitled52_autogen.dir/AutogenInfo.json Debug
	D:\msys64\mingw64\bin\cmake.exe -E touch D:/github/studhelper/untitled52/build/Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug/untitled52_autogen/timestamp

untitled52_autogen: CMakeFiles/untitled52_autogen
untitled52_autogen: untitled52_autogen/timestamp
untitled52_autogen: CMakeFiles/untitled52_autogen.dir/build.make
.PHONY : untitled52_autogen

# Rule to build all files generated by this target.
CMakeFiles/untitled52_autogen.dir/build: untitled52_autogen
.PHONY : CMakeFiles/untitled52_autogen.dir/build

CMakeFiles/untitled52_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled52_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled52_autogen.dir/clean

CMakeFiles/untitled52_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\github\studhelper\untitled52 D:\github\studhelper\untitled52 D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles\untitled52_autogen.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/untitled52_autogen.dir/depend
