
# 💻 CodeWithCPP

A structured learning repository for mastering C++ programming through practical examples. This project provides a progressive path from basic syntax, control flow, and functions to advanced concepts like Object-Oriented Programming (OOP), memory management, and practical problem-solving exercises.
## 📚 Overview

CodeWithCPP is a structured learning repository designed for developers mastering C++ fundamentals and core computer science concepts. The repository follows a logical progression from basic syntax to advanced topics like Object-Oriented Programming (OOP) and memory management, with each concept demonstrated through ready-to-run code examples.

### Key Learning Areas
- **Fundamentals**: Variables, data types, operators, and type casting.
- **Control Flow & Functions**: Switch-case statements, loops, ternary operators, and modular functions.
- **Data Structures**: 1D and 2D arrays, character arrays, and standard strings.
- **Memory Management**: Pointers, reference variables, pass-by-value/reference, and Dynamic Memory Allocation (DML).
- **Object-Oriented Programming (OOP)**: Classes, objects, encapsulation, inheritance, constructors (including private constructors), static members, and deep vs. shallow copying.
- **Practical Problem Solving**: Real-world challenge programs covering percentage calculation, voting eligibility, and conditional logic.

### Why C++?
- **High performance** for system-level programming
- **Fine-grained control** over hardware and memory
- **Industry standard** in game development, embedded systems, and competitive programming
## 🛠️ Features

- **Progressive Learning Path**: Transition smoothly from basic variables to advanced OOP and memory management concepts.
- **Hands-on Examples**: Ready-to-compile code samples covering arrays, pointers, functions, and control flow.
- **Memory Management**: Practical demonstrations of pointers, reference variables, and dynamic memory allocation (DML).
- **Object-Oriented Programming**: Clear examples of classes, objects, static members, and the `const` keyword.
- **Encapsulation & Access Control**: Practical implementation of access modifiers (`public` vs `private`), class attributes, methods, and destructors in the `Student` class.
- **VS Code Integration**: Pre-configured tasks and settings for seamless compilation and execution.
## 🗂️ Repository Structure

text
CodeWithCPP/
├── .vscode/                  # VS Code configuration (settings, tasks)
├── 2D Array/                 # Two-dimensional array operations and problems
├── Array/                    # 1D array concepts, passing arrays, and practice questions
├── Basic-C++/                # Core syntax and "Hello World" (NamsteDuniya)
├── CharArray/                # Character arrays and basic string handling
├── Classes-Objects/          # Object-oriented programming basics (classes and objects)
├── ControlFlowStatemwnt/     # Conditional logic, including Switch-Case statements
├── Functions/                # Function definitions, parameters, and homework exercises
├── Input/                    # User input handling examples
├── Local-Global Variable/    # Scope of local and global variables
├── Loops/                    # Looping constructs (for, do-while, continue)
├── OPPS/                     # Advanced OOP concepts (const, static, macros, encapsulation, inheritance)
│   ├── Encapsulation/        # Encapsulation and access control examples (Student class)
│   ├── Inheritance/          # Inheritance concepts and demonstrations
│   ├── Macros.cpp            # Macro definitions and usage
│   ├── const.cpp             # Const keyword demonstration
│   ├── main.cpp              # Pointer assignment and reference demonstration
│   ├── messy.cpp             # Simple students class example
│   ├── private _ctor.cpp     # Private constructor implementation
│   ├── shallowcpy-deepcpy.cpp# Shallow copy vs. deep copy demonstrations
│   └── statsic.cpp           # Static members and methods
├── Operators/                # Arithmetic, logical, and bitwise operators
├── Passbyvalue&Refrence/     # Pass by value vs. pass by reference demonstrations
├── Pointers/                 # Pointers and Dynamic Memory Allocation (DML)
├── Reference Variable/       # Reference variables and aliases
├── String/                   # C++ standard string class operations
├── TernaryOpertaors/         # Ternary operator usage
├── TypeCasting/              # Implicit and explicit type conversion
└── Variable-Datatypes/       # Variables, data types, and memory sizes

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


### 5. Pass by Value vs. Reference
cpp
// Passbyvalue&Refrence/main.cpp
#include <iostream>
using namespace std;
void solve(string str)
{
    cout << str << endl;
    str[0] = 'r';
    cout << str << endl;
}
int main()
{
    string str = "aakarsh";
    cout << str << endl;
    solve(str);
    cout << str << endl;
    return 0;
}


**Output:**
text
aakarsh
aakarsh
rakarsh
aakarsh


### 6. Reference Variables
cpp
// Reference Variable/main.cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int &temp = a;

    cout << temp << endl;
    cout << a << endl;
}


**Output:**
text
4
4


### 7. Dynamic Memory (Pointers)
cpp
// Pointers/dml.cpp
#include <iostream>
using namespace std;

int main(){
    //dyanamic memeory
    int *ptr = new int;
    cout << *ptr ;

    // ab mereko need nhi h iss int ki
    delete ptr;

    return 0;
}


**Note:** This example demonstrates allocating memory with `new`, accessing the (uninitialized) value, and releasing it with `delete`.

### 8. Local vs. Global Variables
cpp
// Local-Global Variable/main.cpp
#include <iostream>
using namespace std;

int x = 2; // GLOBAL

void fun(){
    int x = 60;
}

int main()
{
    int x = 30; // local to main() fn.
    cout << x << endl;
    cout << ::x << endl; // accessing global with ::

    {
        int x = 50;
        cout << x << endl;
    }
    return 0;
}


**Output:**
text
30
2
50


### 9. Classes and Getters/Setters (OOP)
cpp
// OPPS/const.cpp
#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;

public:
    abc()
    { 
        x = 0;
        y = new int(0);
    }

    int getX(){
        return x;
    }
    void setX(int _val){
        x = _val;
    }
    int getY(){
        return *y;
    }

    void setY(int _val){
        *y = _val;
    }
};

int main()
{
    abc a;
    cout << a.getX() << endl;
    return 0;
}


**Output:**
text
0


### 10. Macros and Preprocessor Directives
cpp
// OPPS/Macros.cpp
#include <iostream>
using namespace std;
#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float circleArea(int r)
{
    return PI * r * r;
}

int main()
{
    float area = circleArea(3);
    cout << area << endl;

    return 0;
}


**Output:**
text
28.26


### 11. Encapsulation and Access Modifiers
cpp
// OPPS/encasulation.cpp
#include <iostream>
using namespace std;

class student{
    int id;      // Private by default
    int name;    // Private by default
    public:
    int age;     // Public attribute

    void study(){
        // Public method
    }
};

int main() {
    return 0;
}


### 12. Class Attributes, Methods, and Destructors
cpp
// OPPS/1_student.cpp
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // Public attributes
    int id;
    int age;
    string name;
    int nos;

private:
    // Private attributes
    int *gpa;
    string gf;

public:
    // Public methods
    void study()
    {
        cout << this->name << "Studying" << endl;
    }
    void sleep()
    {
        cout << this->name << "Sleeping" << endl;
    }
    // Destructor
    ~Student()
    {
        cout << "Student default ctor" << endl;
    }
};

## 🗺️ Learning Path

- [x] **Basics**: Variables, data types, operators, input/output, type casting
- [x] **Control Flow**: Conditionals, loops (for, do-while, continue), ternary operators, switch-case
- [x] **Functions**: Parameter passing (value vs. reference), scope (local/global)
- [x] **Data Structures**: Arrays (1D & 2D), character arrays, strings
- [x] **Pointers & Memory**: Pointers, reference variables, dynamic memory allocation (DML)
- [x] **Object-Oriented Programming (OOP)**: Classes, objects, const keyword, static members, macros, encapsulation, inheritance, constructors (private, shallow vs. deep copy)
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