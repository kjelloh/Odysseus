# Odysseus
A C++ pre-processor and compile time build environment and target identification library. It populates the odysseus namespace with constants, types and template meta-functions that the client may use to tune instatiated code for the identified build and target runtime environment.

## Test Output
```
// MSYS2 console

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2_clang
$ make
Scanning dependencies of target Odysseus
[ 50%] Building CXX object CMakeFiles/Odysseus.dir/src/main.cpp.obj
[100%] Linking CXX executable Odysseus.exe
[100%] Built target Odysseus

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2_clang
$ ./Odysseus.exe
```
**Built with Clang Compiler**
```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2_clang
$

...

// MSYS2 console

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2
$ make
Scanning dependencies of target Odysseus
[ 50%] Building CXX object CMakeFiles/Odysseus.dir/src/main.cpp.obj
[100%] Linking CXX executable Odysseus.exe
[100%] Built target Odysseus

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2
$ ./Odysseus.exe
```
**Built with GCC Compiler**
```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_msys2
$

...

// Visual Studio

1>------ Rebuild All started: Project: ZERO_CHECK, Configuration: Debug Win32 ------
1>  Checking Build System
1>  CMake does not need to re-run because C:/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/build_vs/CMakeFiles/generate.stamp is up-to-date.
2>------ Rebuild All started: Project: Odysseus, Configuration: Debug Win32 ------
2>  Building Custom Rule C:/Users/kjell-olovhogdahl/Documents/GitHub/Odysseus/build/CMakeLists.txt
2>  CMake does not need to re-run because C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus\build\build_vs\CMakeFiles\generate.stamp is up-to-date.
2>cl : Command line warning D9002: ignoring unknown option '-std=c++11'
2>  main.cpp
2>  Odysseus.vcxproj -> C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus\build\build_vs\Debug\Odysseus.exe
========== Rebuild All: 2 succeeded, 0 failed, 0 skipped ==========

// DOS console

C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus\build\build_vs\Debug>Odysseus.exe
```
**Built with Visual Studio Compiler**
```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus\build\build_vs\Debug>

```

## Version 0.1

* Initial code created.
* Simple test of Visual Studio, GCC and Clang compilation
* Prints identified build environment compiler to std out (See output example)

## Project

### Git raw members
```
C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus>tree /F
Folder PATH listing
Volume serial number is D49B-BB89
C:.
│   .gitignore
│   LICENSE
│   README.md
│
└───build
    │   CMakeLists.txt
    │   msys2_clang_me.sh
    │   msys2_deafult_me.sh
    │   vs_me.cmd
    │
    └───src
        │   main.cpp
        │
        └───odysseus
                odysseus.h


C:\Users\kjell-olovhogdahl\Documents\GitHub\Odysseus>
```

### Cmake generated build environments
```
    │   msys2_clang_me.sh       // Cmake generates build_msys2_clang
    │   msys2_deafult_me.sh     // Cmake generates build_msys2 
    │   vs_me.cmd               // Cmake generates build_vs
    │
    ├───build_msys2
    │   │   CMakeCache.txt
    │   │   cmake_install.cmake
    │   │   Makefile
    │   │   Odysseus.exe        // *
        ...

    ├───build_msys2_clang
    │   │   CMakeCache.txt
    │   │   cmake_install.cmake
    │   │   Makefile
    │   │   Odysseus.exe        // *
        ...
    │
    ├───build_vs
    │   │   ALL_BUILD.vcxproj
    │   │   ALL_BUILD.vcxproj.filters
    │   │   CMakeCache.txt
    │   │   cmake_install.cmake
    │   │   Odysseus.sln
    │   │   Odysseus.VC.db
    │   │   Odysseus.vcxproj
    │   │   Odysseus.vcxproj.filters
    │   │   ZERO_CHECK.vcxproj
    │   │   ZERO_CHECK.vcxproj.filters
    │   ...
    │   │
    │   ├───Debug
    │   │       Odysseus.exe    // *
    │   │       ...
    │   ---

```
