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

# Include any dependencies generated for this target.
include CMakeFiles/untitled52.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/untitled52.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled52.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled52.dir/flags.make

untitled52_autogen/timestamp: D:/msys64/mingw64/share/qt6/bin/moc.exe
untitled52_autogen/timestamp: D:/msys64/mingw64/share/qt6/bin/uic.exe
untitled52_autogen/timestamp: CMakeFiles/untitled52.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target untitled52"
	D:\msys64\mingw64\bin\cmake.exe -E cmake_autogen D:/github/studhelper/untitled52/build/Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug/CMakeFiles/untitled52_autogen.dir/AutogenInfo.json Debug
	D:\msys64\mingw64\bin\cmake.exe -E touch D:/github/studhelper/untitled52/build/Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug/untitled52_autogen/timestamp

CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj: CMakeFiles/untitled52.dir/flags.make
CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj: CMakeFiles/untitled52.dir/includes_CXX.rsp
CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj: untitled52_autogen/mocs_compilation.cpp
CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj: CMakeFiles/untitled52.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\untitled52.dir\untitled52_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\untitled52.dir\untitled52_autogen\mocs_compilation.cpp.obj -c D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\untitled52_autogen\mocs_compilation.cpp

CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.i"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\untitled52_autogen\mocs_compilation.cpp > CMakeFiles\untitled52.dir\untitled52_autogen\mocs_compilation.cpp.i

CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.s"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\untitled52_autogen\mocs_compilation.cpp -o CMakeFiles\untitled52.dir\untitled52_autogen\mocs_compilation.cpp.s

CMakeFiles/untitled52.dir/main.cpp.obj: CMakeFiles/untitled52.dir/flags.make
CMakeFiles/untitled52.dir/main.cpp.obj: CMakeFiles/untitled52.dir/includes_CXX.rsp
CMakeFiles/untitled52.dir/main.cpp.obj: D:/github/studhelper/untitled52/main.cpp
CMakeFiles/untitled52.dir/main.cpp.obj: CMakeFiles/untitled52.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled52.dir/main.cpp.obj"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled52.dir/main.cpp.obj -MF CMakeFiles\untitled52.dir\main.cpp.obj.d -o CMakeFiles\untitled52.dir\main.cpp.obj -c D:\github\studhelper\untitled52\main.cpp

CMakeFiles/untitled52.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled52.dir/main.cpp.i"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\github\studhelper\untitled52\main.cpp > CMakeFiles\untitled52.dir\main.cpp.i

CMakeFiles/untitled52.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled52.dir/main.cpp.s"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\github\studhelper\untitled52\main.cpp -o CMakeFiles\untitled52.dir\main.cpp.s

CMakeFiles/untitled52.dir/mainwindow.cpp.obj: CMakeFiles/untitled52.dir/flags.make
CMakeFiles/untitled52.dir/mainwindow.cpp.obj: CMakeFiles/untitled52.dir/includes_CXX.rsp
CMakeFiles/untitled52.dir/mainwindow.cpp.obj: D:/github/studhelper/untitled52/mainwindow.cpp
CMakeFiles/untitled52.dir/mainwindow.cpp.obj: CMakeFiles/untitled52.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled52.dir/mainwindow.cpp.obj"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled52.dir/mainwindow.cpp.obj -MF CMakeFiles\untitled52.dir\mainwindow.cpp.obj.d -o CMakeFiles\untitled52.dir\mainwindow.cpp.obj -c D:\github\studhelper\untitled52\mainwindow.cpp

CMakeFiles/untitled52.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled52.dir/mainwindow.cpp.i"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\github\studhelper\untitled52\mainwindow.cpp > CMakeFiles\untitled52.dir\mainwindow.cpp.i

CMakeFiles/untitled52.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled52.dir/mainwindow.cpp.s"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\github\studhelper\untitled52\mainwindow.cpp -o CMakeFiles\untitled52.dir\mainwindow.cpp.s

CMakeFiles/untitled52.dir/window_data.cpp.obj: CMakeFiles/untitled52.dir/flags.make
CMakeFiles/untitled52.dir/window_data.cpp.obj: CMakeFiles/untitled52.dir/includes_CXX.rsp
CMakeFiles/untitled52.dir/window_data.cpp.obj: D:/github/studhelper/untitled52/window_data.cpp
CMakeFiles/untitled52.dir/window_data.cpp.obj: CMakeFiles/untitled52.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled52.dir/window_data.cpp.obj"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/untitled52.dir/window_data.cpp.obj -MF CMakeFiles\untitled52.dir\window_data.cpp.obj.d -o CMakeFiles\untitled52.dir\window_data.cpp.obj -c D:\github\studhelper\untitled52\window_data.cpp

CMakeFiles/untitled52.dir/window_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/untitled52.dir/window_data.cpp.i"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\github\studhelper\untitled52\window_data.cpp > CMakeFiles\untitled52.dir\window_data.cpp.i

CMakeFiles/untitled52.dir/window_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/untitled52.dir/window_data.cpp.s"
	D:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\github\studhelper\untitled52\window_data.cpp -o CMakeFiles\untitled52.dir\window_data.cpp.s

# Object files for target untitled52
untitled52_OBJECTS = \
"CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/untitled52.dir/main.cpp.obj" \
"CMakeFiles/untitled52.dir/mainwindow.cpp.obj" \
"CMakeFiles/untitled52.dir/window_data.cpp.obj"

# External object files for target untitled52
untitled52_EXTERNAL_OBJECTS =

untitled52.exe: CMakeFiles/untitled52.dir/untitled52_autogen/mocs_compilation.cpp.obj
untitled52.exe: CMakeFiles/untitled52.dir/main.cpp.obj
untitled52.exe: CMakeFiles/untitled52.dir/mainwindow.cpp.obj
untitled52.exe: CMakeFiles/untitled52.dir/window_data.cpp.obj
untitled52.exe: CMakeFiles/untitled52.dir/build.make
untitled52.exe: D:/msys64/mingw64/lib/libQt6Widgets.dll.a
untitled52.exe: D:/msys64/mingw64/lib/libQt6Gui.dll.a
untitled52.exe: D:/msys64/mingw64/lib/libQt6Core.dll.a
untitled52.exe: D:/msys64/mingw64/lib/libQt6EntryPoint.a
untitled52.exe: CMakeFiles/untitled52.dir/linkLibs.rsp
untitled52.exe: CMakeFiles/untitled52.dir/objects1.rsp
untitled52.exe: CMakeFiles/untitled52.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable untitled52.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled52.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled52.dir/build: untitled52.exe
.PHONY : CMakeFiles/untitled52.dir/build

CMakeFiles/untitled52.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled52.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled52.dir/clean

CMakeFiles/untitled52.dir/depend: untitled52_autogen/timestamp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\github\studhelper\untitled52 D:\github\studhelper\untitled52 D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug D:\github\studhelper\untitled52\build\Desktop_Qt_shared_MinGW_w64_MINGW64_MSYS2-Debug\CMakeFiles\untitled52.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/untitled52.dir/depend

