
# 💻 CodeWithCPP

A structured learning repository for mastering C++ programming through practical examples. This project provides a progressive path from basic syntax to advanced concepts, with clean, well-documented code samples for Windows, macOS, and Linux.
## 📚 Overview

CodeWithCPP is designed for developers learning C++ fundamentals and core computer science concepts. The repository follows a logical progression from basic syntax to advanced topics like OOP and DSA, with each concept demonstrated through ready-to-run code examples.

### Why C++?
- **High performance** for system-level programming
- **Fine-grained control** over hardware and memory
- **Industry standard** in game development, embedded systems, and competitive programming
## 🛠️ Features

- **Progressive learning path** from variables to advanced algorithms
- **Ready-to-compile** code samples with detailed inline comments
- **Multi-platform support** (Windows/macOS/Linux)
- **Modern C++ standards** (C++11/17/20)
- **Compiler-agnostic** (GCC, Clang, MSVC)
- **VS Code integration** for seamless development
- **Continuous Integration** automated build and verification pipeline using GitHub Actions
## 🗂️ Repository Structure

CodeWithCPP/
├── .vscode/                # VS Code build configuration
├── 2D Array/               # Two-dimensional array operations
│   └── 21.cpp              # New empty example file
├── Array/                  # Array concepts and examples
├── Basic-C++/              # Core syntax examples
├── CharArray/              # Character array and string basics
├── ControlFlowStatemwnt/   # Conditional logic and switch cases
├── Functions/              # Function definitions and homework exercises
├── Input/                  # User input handling
├── Loops/                  # Looping constructs (for, do-while, continue)
├── Operators/              # Operator examples
├── TernaryOpertaors/       # Ternary operator examples
├── TypeCasting/            # Type conversion demonstrations
└── Variable-Datatypes/     # Variables and data types
## 🚀 Getting Started

### Prerequisites

Install a C++ compiler for your platform:

- **Windows**: [MinGW-w64](https://www.mingw-w64.org/)
- **macOS**: `xcode-select --install`
- **Linux**: `sudo apt install build-essential`

### Setup

1. Clone the repository:
   bash
   git clone https://github.com/imaakarsh/CodeWithCPP.git
   cd CodeWithCPP
   

2. **Option 1: VS Code**  
   Use the pre-configured `.vscode/tasks.json` for compilation.

3. **Option 2: Manual Compilation**  
   bash
   g++ Basic-C++/NamsteDuniya.cpp -o NamsteDuniya
   ./NamsteDuniya  # Linux/macOS
   NamsteDuniya.exe  # Windows
   

### Continuous Integration

This project uses GitHub Actions to automatically build and verify code changes on every push or pull request to the `main` branch. The CI pipeline runs on `ubuntu-latest` and executes the following automated steps:
- `./configure`
- `make`
- `make check`
- `make distcheck`
## 💡 Usage Examples

### 1. Basic Syntax
cpp
// Basic-C++/NamsteDuniya.cpp
#include <iostream>
int main() {
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}


**Output:**
text
Hello Duniya


### 2. Input/Output
cpp
// Input/input.cpp
#include <iostream>
void printNumbers(int n) {
    for(int i=0; i<=n; i++) std::cout << i << std::endl;
}
int main() {
    int value;
    std::cin >> value;
    printNumbers(value);
}


**Example Output (input: 3):**
text
0
1
2
3


### 3. Control Flow (Switch Case)
cpp
// ControlFlowStatemwnt/SwitchCase/1.cpp
#include <iostream>
int main() {
    char grade;
    std::cin >> grade;
    switch(grade) {
        case 'A': std::cout << "90-100"; break;
        case 'B': std::cout << "80-89"; break;
        default: std::cout << "Below 80";
    }
}


**Example Output (input: B):**
text
80-89


### 4. Character Arrays
cpp
// CharArray/main.cpp
#include <iostream>
using namespace std;

int main() {
    char arr[10] = "babbar";
    return 0;
}

## 🗺️ Learning Path

- [x] **Basics**: Variables, operators, I/O, type casting
- [x] **Control Flow**: Conditionals & loops
- [x] **Functions**
- [x] **Data Structures**: Arrays
- [ ] **OOP Concepts**: Classes, inheritance
- [ ] **Advanced Topics**: STL, templates
## 🤝 Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/your-topic`
3. Submit clean, well-commented C++ code (no binary files)
4. Follow C++ naming conventions

---

## 🔧 Troubleshooting

| Issue | Solution |
|-------|----------|
| `g++ not found` | Add compiler to system PATH |
| `Permission denied` | `chmod +x filename` on Linux/macOS |
| Compilation errors | Specify standard: `g++ -std=c++17 file.cpp` |

---

## 📄 License

MIT License - see [LICENSE](LICENSE) for details

---

## 👤 Author

**Akarsh**  
GitHub: [@imaakarsh](https://github.com/imaakarsh)  
Star this repository to support C++ learning! ⭐