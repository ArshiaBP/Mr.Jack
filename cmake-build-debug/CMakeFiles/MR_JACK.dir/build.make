# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\LENOVO\CLionProject\MR.JACK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MR_JACK.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/MR_JACK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MR_JACK.dir/flags.make

CMakeFiles/MR_JACK.dir/main.c.obj: CMakeFiles/MR_JACK.dir/flags.make
CMakeFiles/MR_JACK.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MR_JACK.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MR_JACK.dir\main.c.obj -c C:\Users\LENOVO\CLionProject\MR.JACK\main.c

CMakeFiles/MR_JACK.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MR_JACK.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LENOVO\CLionProject\MR.JACK\main.c > CMakeFiles\MR_JACK.dir\main.c.i

CMakeFiles/MR_JACK.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MR_JACK.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LENOVO\CLionProject\MR.JACK\main.c -o CMakeFiles\MR_JACK.dir\main.c.s

CMakeFiles/MR_JACK.dir/MENU.c.obj: CMakeFiles/MR_JACK.dir/flags.make
CMakeFiles/MR_JACK.dir/MENU.c.obj: MENU.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MR_JACK.dir/MENU.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MR_JACK.dir\MENU.c.obj -c C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\MENU.c

CMakeFiles/MR_JACK.dir/MENU.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MR_JACK.dir/MENU.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\MENU.c > CMakeFiles\MR_JACK.dir\MENU.c.i

CMakeFiles/MR_JACK.dir/MENU.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MR_JACK.dir/MENU.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\MENU.c -o CMakeFiles\MR_JACK.dir\MENU.c.s

# Object files for target MR_JACK
MR_JACK_OBJECTS = \
"CMakeFiles/MR_JACK.dir/main.c.obj" \
"CMakeFiles/MR_JACK.dir/MENU.c.obj"

# External object files for target MR_JACK
MR_JACK_EXTERNAL_OBJECTS =

MR_JACK.exe: CMakeFiles/MR_JACK.dir/main.c.obj
MR_JACK.exe: CMakeFiles/MR_JACK.dir/MENU.c.obj
MR_JACK.exe: CMakeFiles/MR_JACK.dir/build.make
MR_JACK.exe: CMakeFiles/MR_JACK.dir/linklibs.rsp
MR_JACK.exe: CMakeFiles/MR_JACK.dir/objects1.rsp
MR_JACK.exe: CMakeFiles/MR_JACK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable MR_JACK.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MR_JACK.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MR_JACK.dir/build: MR_JACK.exe
.PHONY : CMakeFiles/MR_JACK.dir/build

CMakeFiles/MR_JACK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MR_JACK.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MR_JACK.dir/clean

CMakeFiles/MR_JACK.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\LENOVO\CLionProject\MR.JACK C:\Users\LENOVO\CLionProject\MR.JACK C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug C:\Users\LENOVO\CLionProject\MR.JACK\cmake-build-debug\CMakeFiles\MR_JACK.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MR_JACK.dir/depend

