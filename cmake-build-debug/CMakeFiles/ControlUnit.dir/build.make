# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2018.1.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2018.1.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\JetBrains Saves\CLion\ControlUnit"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\ControlUnit.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\ControlUnit.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ControlUnit.dir\flags.make

CMakeFiles\ControlUnit.dir\main.cpp.obj: CMakeFiles\ControlUnit.dir\flags.make
CMakeFiles\ControlUnit.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ControlUnit.dir/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ControlUnit.dir\main.cpp.obj /FdCMakeFiles\ControlUnit.dir\ /FS -c "D:\JetBrains Saves\CLion\ControlUnit\main.cpp"
<<

CMakeFiles\ControlUnit.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ControlUnit.dir/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\ControlUnit.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrains Saves\CLion\ControlUnit\main.cpp"
<<

CMakeFiles\ControlUnit.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ControlUnit.dir/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ControlUnit.dir\main.cpp.s /c "D:\JetBrains Saves\CLion\ControlUnit\main.cpp"
<<

CMakeFiles\ControlUnit.dir\main.cpp.obj.requires:

.PHONY : CMakeFiles\ControlUnit.dir\main.cpp.obj.requires

CMakeFiles\ControlUnit.dir\main.cpp.obj.provides: CMakeFiles\ControlUnit.dir\main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\ControlUnit.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\ControlUnit.dir\main.cpp.obj.provides.build
.PHONY : CMakeFiles\ControlUnit.dir\main.cpp.obj.provides

CMakeFiles\ControlUnit.dir\main.cpp.obj.provides.build: CMakeFiles\ControlUnit.dir\main.cpp.obj


CMakeFiles\ControlUnit.dir\functions.cpp.obj: CMakeFiles\ControlUnit.dir\flags.make
CMakeFiles\ControlUnit.dir\functions.cpp.obj: ..\functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ControlUnit.dir/functions.cpp.obj"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ControlUnit.dir\functions.cpp.obj /FdCMakeFiles\ControlUnit.dir\ /FS -c "D:\JetBrains Saves\CLion\ControlUnit\functions.cpp"
<<

CMakeFiles\ControlUnit.dir\functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ControlUnit.dir/functions.cpp.i"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\ControlUnit.dir\functions.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\JetBrains Saves\CLion\ControlUnit\functions.cpp"
<<

CMakeFiles\ControlUnit.dir\functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ControlUnit.dir/functions.cpp.s"
	C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ControlUnit.dir\functions.cpp.s /c "D:\JetBrains Saves\CLion\ControlUnit\functions.cpp"
<<

CMakeFiles\ControlUnit.dir\functions.cpp.obj.requires:

.PHONY : CMakeFiles\ControlUnit.dir\functions.cpp.obj.requires

CMakeFiles\ControlUnit.dir\functions.cpp.obj.provides: CMakeFiles\ControlUnit.dir\functions.cpp.obj.requires
	$(MAKE) -f CMakeFiles\ControlUnit.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\ControlUnit.dir\functions.cpp.obj.provides.build
.PHONY : CMakeFiles\ControlUnit.dir\functions.cpp.obj.provides

CMakeFiles\ControlUnit.dir\functions.cpp.obj.provides.build: CMakeFiles\ControlUnit.dir\functions.cpp.obj


# Object files for target ControlUnit
ControlUnit_OBJECTS = \
"CMakeFiles\ControlUnit.dir\main.cpp.obj" \
"CMakeFiles\ControlUnit.dir\functions.cpp.obj"

# External object files for target ControlUnit
ControlUnit_EXTERNAL_OBJECTS =

ControlUnit.exe: CMakeFiles\ControlUnit.dir\main.cpp.obj
ControlUnit.exe: CMakeFiles\ControlUnit.dir\functions.cpp.obj
ControlUnit.exe: CMakeFiles\ControlUnit.dir\build.make
ControlUnit.exe: CMakeFiles\ControlUnit.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ControlUnit.exe"
	"D:\CLion 2018.1.4\bin\cmake\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\ControlUnit.dir --manifests  -- C:\PROGRA~2\MIB055~1\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\ControlUnit.dir\objects1.rsp @<<
 /out:ControlUnit.exe /implib:ControlUnit.lib /pdb:"D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug\ControlUnit.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\ControlUnit.dir\build: ControlUnit.exe

.PHONY : CMakeFiles\ControlUnit.dir\build

CMakeFiles\ControlUnit.dir\requires: CMakeFiles\ControlUnit.dir\main.cpp.obj.requires
CMakeFiles\ControlUnit.dir\requires: CMakeFiles\ControlUnit.dir\functions.cpp.obj.requires

.PHONY : CMakeFiles\ControlUnit.dir\requires

CMakeFiles\ControlUnit.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ControlUnit.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ControlUnit.dir\clean

CMakeFiles\ControlUnit.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\JetBrains Saves\CLion\ControlUnit" "D:\JetBrains Saves\CLion\ControlUnit" "D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug" "D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug" "D:\JetBrains Saves\CLion\ControlUnit\cmake-build-debug\CMakeFiles\ControlUnit.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\ControlUnit.dir\depend

