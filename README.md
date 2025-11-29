# Hudson County Community College C++ Class Assistant (HcccCppClassAssistant)

A lightweight workspace to organize lectures, coding labs, and assignments for HCCC CSC-115 (C++). Programs are organized by unit, with single-file C++ sources (.cpp) and compiled executables (.exe) for quick testing in class.

Updated: 2025-11-28

## Contents
- Unit1–Unit5 folders with:
  - Lecture <MM-DD-YYYY>.cpp
  - Unit<N>Assignment<M>.cpp and Unit<N>CodingLab<M>.cpp
  - Matching .exe next to many sources for quick runs on Windows
- old/ contains archived materials from prior terms

## Folder structure (truncated)
```
README.md
old/
Unit1/
    Lecture 09-16-2025.cpp
    Lecture 09-23-2025.cpp
    Unit1Assignment1.cpp
    Unit1Assignment2.cpp
    Unit1Assignment3.cpp
    Unit1CodingLab1.cpp
    Unit1CodingLab2.cpp
Unit2/
    Lecture 09-30-2025.cpp
    Unit2Assignment1.cpp
    Unit2Assignment1.exe
    Unit2Assignment2.cpp
    Unit2Assignment3.cpp
    Unit2Assignment4.cpp
    Unit2Assignment5.cpp
    Unit2CodingLab1.cpp
Unit3/
    Lecture 10-07-2025.cpp
    Lecture 10-14-2025.cpp
    Unit3Assignment1.cpp
    Unit3Assignment1.exe
    Unit3Assignment2.cpp
    Unit3Assignment2.exe
    Unit3Assignment3.cpp
    Unit3Assignment3.exe
    Unit3CodingLab1.cpp
    Unit3CodingLab1.exe
Unit4/
    Unit4Assignment1.cpp
    Unit4Assignment1.exe
    Unit4Assignment2.cpp
    Unit4Assignment2.exe
    Unit4Assignment3.cpp
    Unit4Assignment3.exe
    Unit4CodingLab1.cpp
    Unit4CodingLab1.exe
Unit5/
    Unit5Assignment1.cpp
    Unit5Assignment1.exe (optional)
```

## Prerequisites (Windows + VS Code)
- Visual Studio Code
- VS Code extension: C/C++ (Microsoft)
- A C++ compiler (choose one)
  - Microsoft C++ (MSVC) via Visual Studio or Build Tools
  - MinGW-w64 (e.g., via MSYS2)
- Optional: Git for version control

## Quick Start in VS Code
1. Open the top-level folder in VS Code.
2. Open a file to work on under a unit (e.g., Unit5/Unit5Assignment1.cpp).
3. Build and run one of the following ways:
   - Run button: Run > Run Without Debugging (select your compiler on first use).
   - Terminal (MinGW/g++):
     - cd Unit5
     - g++ -std=c++17 Unit5Assignment1.cpp -o Unit5Assignment1.exe
     - .\Unit5Assignment1.exe
   - Terminal (MSVC/cl):
     - Open “Developer Command Prompt for VS”
     - cd Unit5
     - cl /EHsc Unit5Assignment1.cpp
     - Unit5Assignment1.exe

Notes:
- Executables are kept next to sources for convenience.
- If the program needs input, run from a terminal to provide stdin.
- Each .cpp should have exactly one main(). Split lectures into separate files if showing multiple examples.

## Recommended VS Code setup
- C/C++ extension for IntelliSense and debugging.
- Optional compiler path: Settings > search "C_Cpp.default.compilerPath".
- Optional: add .vscode/tasks.json and launch.json for one-click build/run per file.

## Conventions
- Organization: Unit<N>/ contains lectures, assignments, and coding labs for that unit.
- Filenames: Unit<N>Assignment<M>.cpp, Unit<N>CodingLab<M>.cpp, Lecture <MM-DD-YYYY>.cpp
- Git hygiene: ignore compiled artifacts (add *.exe to .gitignore).

## Academic integrity
These materials are for study and practice. Follow course policies for collaboration and submissions.

## License
No explicit license. Content intended for personal educational use unless otherwise specified by the repository owner.