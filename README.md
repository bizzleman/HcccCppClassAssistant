# Hudson County Community College C++ Class Assistant (`HcccCppClassAssistant`)

A lightweight workspace for organizing lectures, coding labs, and assignments for **HCCC CSC-115 (C++)**.
Contains single-file `.cpp` programs and compiled `.exe` outputs for quick testing and reference.

---

## 📁 Contents

* **Unit 3** — examples and assignments (each with a matching `.exe`)
* **old/** — archived lectures and previous units

**Example layout (truncated):**

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

---

## ⚙️ Prerequisites (Windows + VS Code)

* [Visual Studio Code](https://code.visualstudio.com/)
* **C/C++ extension** (Microsoft)
* **C++ compiler** (choose one):

  * MSVC via *Visual Studio* or *Build Tools*
  * MinGW-w64 via *MSYS2* or similar
* *(Optional)* Git for version control

---

## ▶ Quick Start

1. Open the project folder in VS Code.
2. Open a `.cpp` file (e.g., `Unit3Assignment1.cpp`).
3. Build and run:

### Using VS Code Run Button

* Click **Run > Run Without Debugging** (▶)
* On first use, select your compiler

### Using Terminal — MinGW (g++)

```bash
g++ -std=c++17 Unit3Assignment1.cpp -o Unit3Assignment1.exe
.\Unit3Assignment1.exe
```

### Using Terminal — MSVC (cl)

```cmd
cl /EHsc Unit3Assignment1.cpp
Unit3Assignment1.exe
```

**Notes**

* `.exe` files are stored beside their `.cpp` sources.
* Run from a terminal when input is required.

---

## 💻 Recommended VS Code Setup

* Enable IntelliSense and debugging (C/C++ extension).
* *(Optional)* Set your compiler path:
  `File > Preferences > Settings > C_Cpp.default.compilerPath`
* *(Optional)* Configure `tasks.json` / `launch.json` for one-click builds.

---

## 📜 Conventions

* Naming: `Unit<N>Assignment<M>.cpp`, `Unit<N>CodingLab<M>.cpp`, `Lecture <MM-DD-YYYY>.cpp`
* Exclude `.exe` files from Git (`*.exe` in `.gitignore`)
* `old/` folder = archived content (read-only reference)

---

## 🧠 Academic Integrity

Use these materials for learning and practice. Follow your instructor’s rules on collaboration and submissions.

---

## 📄 License

No explicit license.
Content is for **personal educational use** unless otherwise specified by the repository owner.

---