
# CodeWithCPP

A comprehensive, beginner-friendly repository dedicated to mastering C++ programming from scratch. Whether you are starting your coding journey or brushing up on core computer science concepts, this repository serves as a structured guide to learning C++ through practical, well-commented code examples.

---

## 🚀 Overview

`CodeWithCPP` is an educational repository designed to help developers and students learn C++ systematically. Starting from the absolute basics—like the classic "Hello World" (Namaste Duniya) and variables—the repository is structured to scale up to advanced topics, including Object-Oriented Programming (OOPs), Data Structures, and Algorithms (DSA).

### Why C++?
* **Performance:** High-performance, system-level programming language.
* **Control:** Offers direct control over hardware and memory management.
* **Industry Standard:** Widely used in game development, operating systems, embedded systems, and competitive programming.

---
## ✨ Features

- 📚 **Structured Learning Path:** Organized directories moving from basic syntax (like variables and data types) to complex algorithms.
- 💻 **Ready-to-Run Code:** Clean, compiled, and tested C++ source files.
- 📝 **Detailed Comments:** Every program includes inline documentation explaining the logic.
- 🛠️ **Multi-Platform Support:** Code can be compiled and executed on Windows, macOS, and Linux.

---
## 🛠️ Tech Stack

* **Language:** C++ (C++11 / C++17 / C++20 standards)
* **Compiler Support:** 
  * GCC / G++ (MinGW for Windows)
  * Clang (macOS)
  * MSVC (Visual Studio)
* **Build Tools:** Command-line compilation, VS Code integration

---

## 📂 Repository Structure

text
CodeWithCPP/
├── .vscode/
│   └── tasks.json              # VS Code build tasks configuration
├── Basic-C++/
│   ├── NamsteDuniya.cpp        # The classic "Hello World" program
│   ├── NamsteDuniya.exe        # Compiled executable (Windows)
│   └── Variable-Datatypes/
│       ├── Variable-DataTypes.cpp # Variable declaration, definition, and manipulation
│       └── Variable-DataTypes.exe # Compiled executable (Windows)
└── README.md                   # Project documentation


---
## 🚀 Getting Started

### Prerequisites

To run the programs locally, you need a C++ compiler installed on your system.

#### 1. Windows (MinGW / GCC)
* Download and install [MinGW-w64](https://www.mingw-w64.org/).
* Add the `bin` folder path to your system's Environment Variables (`PATH`).
* Verify installation:
  bash
  g++ --version
  

#### 2. macOS (Clang)
* Install Xcode Command Line Tools:
  bash
  xcode-select --install
  

#### 3. Linux (GCC)
* Install build-essential package:
  bash
  sudo apt update
  sudo apt install build-essential
  

---

### Installation

1. Clone the repository to your local machine:
   bash
   git clone https://github.com/imaakarsh/CodeWithCPP.git
   

2. Navigate into the project directory:
   bash
   cd CodeWithCPP
   

---

### Compilation & Execution

#### Option 1: Using VS Code (Windows)
This repository includes a pre-configured build task (`.vscode/tasks.json`) to compile active files using `g++.exe`.
1. Open the repository in VS Code.
2. Open the C++ file you want to run (e.g., `Basic-C++/Variable-Datatypes/Variable-DataTypes.cpp`).
3. Press `Ctrl+Shift+B` to build the active file.
4. Run the generated `.exe` file from your terminal.

#### Option 2: Manual Compilation
To compile and run any C++ program manually using the terminal:

1. Navigate to the directory containing the source file:
   bash
   cd Basic-C++
   

2. Compile the source code using `g++`:
   bash
   g++ NamsteDuniya.cpp -o NamsteDuniya
   

3. Run the compiled executable:
   * **Windows:**
     bash
     NamsteDuniya.exe
     
   * **Linux / macOS:**
     bash
     ./NamsteDuniya
     

---
## 💻 Usage Example

### 1. Hello World (`NamsteDuniya.cpp`)

cpp
#include <iostream>
using namespace std;

int main()
{
    // Prints "Hello Duniya" (Hello World) to the console
    cout << "Hello Duniya" << endl;

    return 0;
}


#### Expected Output:
text
Hello Duniya


---

### 2. Variables & Data Types (`Variable-DataTypes.cpp`)

cpp
#include <iostream>
using namespace std;

int main()
{
    // variable define
    int marks = 100;
    cout << "My Marks is:" << marks;

    // declarition
    int age;

    // defination
    int age = 21;
    cout << age;

    // manipulation or updation
    age = 23;
    
    return 0;
}


#### Expected Output:
text
My Marks is:10021


---
## 🗺️ Roadmap & Learning Path

This repository is continuously updated. Below is the planned progression of topics:

- [x] **Basic C++:** Variables, Data Types, Operators, Input/Output.
- [ ] **Control Flow:** Conditionals (`if-else`, `switch`) and Loops (`for`, `while`, `do-while`).
- [ ] **Functions & Pointers:** Modular programming, memory addresses, and reference variables.
- [ ] **Data Structures:** Arrays, Strings, Vectors, Linked Lists, Stacks, and Queues.
- [ ] **Object-Oriented Programming (OOPs):** Classes, Objects, Inheritance, Polymorphism, Encapsulation, and Abstraction.
- [ ] **Advanced Concepts:** Templates, Standard Template Library (STL), and File Handling.

---

## 🤝 Contributing

Contributions are welcome! If you want to add new programs, optimize existing ones, or fix issues, please follow these steps:

1. Fork the Repository.
2. Create your Feature Branch:
   ```bash
   git checkout -b feature/AmazingFeature
   ```
3. Commit your changes:
   ```bash
   git commit -m 'Add some AmazingFeature'
   ```
4. Push to the Branch:
   ```bash
   git push origin feature/AmazingFeature
   ```
5. Open a Pull Request.

### Contribution Guidelines:
* Ensure your code is clean and well-commented.
* Avoid uploading compiled binary files (`.exe`, `.out`) in your pull requests; only submit source files (`.cpp`, `.h`).
* Follow standard C++ naming conventions (camelCase or snake_case).

---

## 🔧 Troubleshooting

| Issue | Cause | Solution |
| :--- | :--- | :--- |
| `'g++' is not recognized...` | Compiler not in System PATH | Add your compiler's `bin` directory to your system's Environment Variables. |
| `Permission denied` | Executable lacks run permissions | Run `chmod +x <filename>` before executing (Linux/macOS). |
| Compilation errors | Syntax or standard mismatch | Ensure you are compiling with the correct standard: `g++ -std=c++17 file.cpp` |

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 👤 Author

**Akarsh**
* GitHub: [@imaakarsh](https://github.com/imaakarsh)

*Feel free to star ⭐ this repository if you find it helpful on your C++ learning journey!*