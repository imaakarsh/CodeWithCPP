# CodeWithCPP

A structured learning repository for mastering C++ programming through practical examples. This project provides a progressive path from basic syntax to advanced concepts like Object-Oriented Programming (OOP) and memory management.

---

## 📚 Learning Path

### Core Concepts
- **Fundamentals**: Variables, data types, operators, input/output, and type casting
- **Control Flow**: Conditionals, loops (for/do-while), ternary operators, switch-case
- **Functions**: Parameter passing (value/reference), scope (local/global)
- **Data Structures**: Arrays (1D/2D), character arrays, standard strings
- **Memory Management**: Pointers, reference variables, dynamic memory allocation (DML)
- **Object-Oriented Programming**: Classes, objects, encapsulation, inheritance, static members, and deep/shallow copy

---

## 📁 Repository Structure

```
CodeWithCPP/
├── .vscode/              # VS Code configuration
├── Basic-C++/            # Core syntax & "Hello World"
├── CharArray/            # Character arrays & string handling
├── Classes-Objects/      # OOP basics
├── ControlFlow/          # Conditional logic & switch-case
├── Functions/            # Function definitions & parameters
├── Input/                # User input examples
├── Loops/                # Looping constructs
├── OOP/                  # Advanced OOP concepts
│   ├── Encapsulation/    # Access control & class design
│   ├── Inheritance/      # Inheritance demonstrations
│   ├── Macros.cpp        # Preprocessor directives
│   └── Static.cpp        # Static members & methods
├── Pointers/             # Pointer operations & DML
├── Reference/            # Reference variables
└── TypeCasting/          # Implicit/explicit type conversion
```

---

## 🚀 Getting Started

### Prerequisites
Install a C++ compiler:
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/)
- **macOS**: `xcode-select --install`
- **Linux**: `sudo apt install build-essential`

### Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/imaakarsh/CodeWithCPP.git
   cd CodeWithCPP
   ```

2. **VS Code Users**: Use pre-configured `.vscode/tasks.json` for compilation.

3. **Manual Compilation**:
   ```bash
   g++ Basic-C++/NamsteDuniya.cpp -o NamsteDuniya
   ./NamsteDuniya  # Linux/macOS
   NamsteDuniya.exe  # Windows
   ```

---

## 💡 Example Code

### 1. Basic Syntax
```cpp
// Basic-C++/NamsteDuniya.cpp
#include <iostream>
int main() {
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}
```

**Output:**
```
Hello Duniya
```

### 2. Pass by Value vs. Reference
```cpp
// Passbyvalue&Refrence/main.cpp
#include <iostream>
using namespace std;

void solve(string str) {
    cout << str << endl;
    str[0] = 'r';
    cout << str << endl;
}

int main() {
    string str = "aakarsh";
    cout << str << endl;
    solve(str);
    cout << str << endl;
    return 0;
}
```

**Output:**
```
aakarsh
aakarsh
rakarsh
aakarsh
```

---

## 🛠️ Key Features

- **Progressive Learning**: From syntax to advanced OOP
- **Hands-on Examples**: Ready-to-compile code for arrays, pointers, and control flow
- **Memory Management**: Practical DML and pointer demonstrations
- **OOP Concepts**: Encapsulation, inheritance, and static members
- **VS Code Integration**: Pre-configured tasks for seamless development

---

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/your-topic`
3. Submit clean, well-commented C++ code
4. Follow C++ naming conventions

---

## 🔧 Troubleshooting

| Issue | Solution |
|-------|----------|
| `g++ not found` | Install compiler or add to PATH |
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