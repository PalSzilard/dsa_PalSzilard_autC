# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/labor7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/labor7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/labor7.dir/flags.make

CMakeFiles/labor7.dir/main.c.obj: CMakeFiles/labor7.dir/flags.make
CMakeFiles/labor7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/labor7.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\labor7.dir\main.c.obj   -c F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\main.c

CMakeFiles/labor7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/labor7.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\main.c > CMakeFiles\labor7.dir\main.c.i

CMakeFiles/labor7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/labor7.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\main.c -o CMakeFiles\labor7.dir\main.c.s

CMakeFiles/labor7.dir/function.c.obj: CMakeFiles/labor7.dir/flags.make
CMakeFiles/labor7.dir/function.c.obj: ../function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/labor7.dir/function.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\labor7.dir\function.c.obj   -c F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\function.c

CMakeFiles/labor7.dir/function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/labor7.dir/function.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\function.c > CMakeFiles\labor7.dir\function.c.i

CMakeFiles/labor7.dir/function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/labor7.dir/function.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\function.c -o CMakeFiles\labor7.dir\function.c.s

# Object files for target labor7
labor7_OBJECTS = \
"CMakeFiles/labor7.dir/main.c.obj" \
"CMakeFiles/labor7.dir/function.c.obj"

# External object files for target labor7
labor7_EXTERNAL_OBJECTS =

labor7.exe: CMakeFiles/labor7.dir/main.c.obj
labor7.exe: CMakeFiles/labor7.dir/function.c.obj
labor7.exe: CMakeFiles/labor7.dir/build.make
labor7.exe: CMakeFiles/labor7.dir/linklibs.rsp
labor7.exe: CMakeFiles/labor7.dir/objects1.rsp
labor7.exe: CMakeFiles/labor7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable labor7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\labor7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/labor7.dir/build: labor7.exe

.PHONY : CMakeFiles/labor7.dir/build

CMakeFiles/labor7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\labor7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/labor7.dir/clean

CMakeFiles/labor7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7 F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7 F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug F:\szilard\egyetem2\adatszerkesalg\dsa_PalSzilard_autC\labor7\cmake-build-debug\CMakeFiles\labor7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/labor7.dir/depend

