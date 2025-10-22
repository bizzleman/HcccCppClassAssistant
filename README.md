# Hudson County Community College C++ Class Assistant (HcccCppClassAssistant)

A lightweight workspace to organize lectures, coding labs, and assignments for HCCC CSC-115 (C++). Includes single-file C++ programs and compiled executables for quick reference and testing in class.

## Contents
- Unit 3 examples and assignments (single .cpp files with matching .exe outputs)
- Archived materials under old/ (lectures, prior units, and labs)

Example layout (truncated):
```
HcccCppClassAssistant/
  README.md
  Unit3Assignment1.cpp / Unit3Assignment1.exe
  Unit3Assignment2.cpp / Unit3Assignment2.exe
  Unit3Assignment3.cpp / Unit3Assignment3.exe
  Unit3CodingLab1.cpp / Unit3CodingLab1.exe
  old/
    CppClassAssistant/
      Lecture 09-16-2025.cpp
      Lecture 09-23-2025.cpp
      ...
    HcccFrancisSison/
      Unit2Assignment1.cpp
      Unit2Assignment2.cpp
      ...
```

## Prerequisites (Windows + VS Code)
- Visual Studio Code
- VS Code extension: C/C++ (Microsoft)
- A C++ compiler (pick one):
  - Microsoft C++ (MSVC) via Visual Studio Build Tools / Visual Studio
  - MinGW-w64 (e.g., via MSYS2)

Optional: Git installed if you plan to version and sync changes.

## Quick Start in VS Code
1. Open the folder in VS Code.
2. Open any .cpp file (e.g., Unit3Assignment1.cpp).
3. Build and run one of the following ways:
   - Using the Run button: Click Run > Run Without Debugging (or the ▶ button). On first use, select your compiler.
   - Using a terminal with MinGW (g++):
     - g++ -std=c++17 Unit3Assignment1.cpp -o Unit3Assignment1.exe
     - .\Unit3Assignment1.exe
   - Using a terminal with MSVC (cl):
     - Open “Developer Command Prompt for VS”
     - cl /EHsc Unit3Assignment1.cpp
     - Unit3Assignment1.exe

Notes:
- Executables (.exe) are placed next to their source files for convenience.
- If input is required, run from a terminal so you can type into stdin.

## Recommended VS Code setup
- C/C++ extension provides IntelliSense and debugging.
- Optional: Configure your default compiler path (File > Preferences > Settings > "C_Cpp.default.compilerPath").
- Optional: Set up tasks.json and launch.json for one-click build/run per file.

## Conventions
- File naming: Unit<N>Assignment<M>.cpp, Unit<N>CodingLab<M>.cpp, Lecture <MM-DD-YYYY>.cpp
- Keep compiled artifacts (.exe) out of source control if you’re using Git (add *.exe to .gitignore).
- The old/ folder contains archived lectures and earlier units; treat as read-only reference.

## Academic integrity
These materials are for study and practice. Follow your instructor’s policy on collaboration and submissions.

## License
No explicit license is provided. Content is intended for personal educational use unless the repository owner specifies otherwise.
