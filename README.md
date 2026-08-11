
# 💻 CodeWithCPP

A structured C++ learning repository featuring progressive examples, practice problems, and VS Code configurations. This project covers core programming concepts, object-oriented principles, and memory management through practical code samples.
## 📁 Repository Structure

```
CodeWithCPP/
├── .vscode/                  # VS Code configuration
├── CMakeLists.txt            # Root build configuration
├── Code/                     # Core learning modules
│   ├── basic-c/              # Core syntax & "Hello World"
│   ├── arrays/               # 1D/2D arrays and operations
│   ├── controlflow/          # Conditional logic & loops
│   ├── functions/            # Function definitions and scope
│   ├── memory/               # Pointers and dynamic allocation
│   ├── oop/                  # OOP concepts (classes, inheritance)
│   └── ...                   # Additional topic folders
└── problems/                 # Practice challenges
```

## 🚀 Getting Started

### Prerequisites
Install a C++ compiler and CMake:
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/) + [CMake](https://cmake.org/)
- **macOS**: `xcode-select --install` + `brew install cmake`
- **Linux**: `sudo apt install build-essential cmake`

### Build Process
bash
git clone https://github.com/imaakarsh/CodeWithCPP.git
cd CodeWithCPP

# 🏗️ CMake Build

To build the entire project using CMake, run the following commands from the root directory:

bash
mkdir build && cd build
cmake ..
cmake --build .

# 🛠️ Manual Compilation

Alternatively, you can compile individual C++ source files directly using `g++`:

bash
g++ Code/basic-c/NamsteDuniya.cpp -o NamsteDuniya
./NamsteDuniya

## 🛠️ Key Features

- **Comprehensive C++ Basics**: From variables, data types, and operators to loops and control flow statements.
- **Data Structures**: Practical examples of 1D arrays, 2D arrays, character arrays, and strings.
- **Advanced Concepts**: Detailed coverage of pointers, dynamic memory allocation (DML), and reference variables.
- **Object-Oriented Programming (OOP)**: Dedicated modules for Encapsulation, Inheritance, and Polymorphism.
- **Practice Problems**: A collection of logic-building challenges including voting eligibility, day/month determination, and percentage calculation.
- **Modern Build Tooling**: CMake-based build system and pre-configured VS Code environment.
## 💡 Example Code

### Basic Syntax
cpp
// Code/basic-c/NamsteDuniya.cpp
#include <iostream>
int main() { 
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}


### Pass by Value vs. Reference
cpp
// Code/passbyvalue-and-refrence/main.cpp
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


### Object-Oriented Programming (Inheritance)
cpp
// Code/opps/Inheritance/main.cpp
#include <iostream>
using namespace std;

class Vehicles {
protected:
    string name;
    string modle;
    int noOfTyres;

public:
    Vehicles(string _name, string _modle, int _noOfTyres) {
        this->name = _name;
        this->modle = _modle;
        this->noOfTyres = _noOfTyres;
    }

    void start_engine() {
        cout << "Start The engine " << name << modle << endl;
    }

    ~Vehicles() {
        cout << "Im inside Vehicle" << endl;
    }
};

class Car : public Vehicles {
protected:
    int noOfdoors;
    string transmission;

public:
    Car(string _name, string _modle, int _noOfTyres, int _noOfdoors, string _transmission) 
        : Vehicles(_name, _modle, _noOfTyres) {
        this->noOfdoors = _noOfdoors;
        this->transmission = _transmission;
    }

    void startAC() {
        cout << "Ac has been strted of" << name << endl;
    }

    ~Car() {
        cout << "Im inside Car dtor" << endl;
    }
};

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature/your-topic`
3. Submit clean, well-commented C++ code
4. Follow C++ naming conventions

## 🔧 Troubleshooting

| Issue | Solution |
|-------|----------|
| `g++ not found` | Install compiler or add to PATH |
| `Permission denied` | `chmod +x filename` on Linux/macOS |
| Compilation errors | Specify standard: `g++ -std=c++17 file.cpp` |

## 📄 License

MIT License - see [LICENSE](LICENSE) for details

## 👤 Author

**Akarsh**  
GitHub: [@imaakarsh](https://github.com/imaakarsh)  
Star this repository to support C++ learning! ⭐