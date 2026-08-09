Repository reorganizer

Run `python restructure.py` to move existing topic folders into a standardized layout:

- `examples/` — topic-based example folders (kebab-case)
- `problems/` — moved from `Questions/`
- `src/`, `include/` — for shared code
- `build/` — build outputs

The script will also generate `CMakeLists.txt` files for each example/problem folder and a root `CMakeLists.txt` that adds all subdirectories.

After running, build with CMake:

Windows (from repo root):

```powershell
mkdir build
cd build
cmake .. -G "MinGW Makefiles"
cmake --build .
```

Or use your existing VS Code build tasks.

# CodeWithCPP

A structured learning repository for mastering C++ programming through practical examples. This project provides a progressive path from basic syntax to advanced concepts like Object-Oriented Programming (OOP) and memory management, organized with CMake for easy building.
## 📚 Learning Path

### Core Concepts
- **Fundamentals**: Variables & data types, operators, input/output, and type casting
- **Control Flow**: Conditionals, loops (for/do-while/continue), ternary operators, and switch-case
- **Functions**: Parameter passing (value/reference), scope (local/global variables)
- **Data Structures**: Arrays (1D/2D), character arrays, and standard strings
- **Memory Management**: Pointers, reference variables, and dynamic memory allocation (DML)
- **Object-Oriented Programming (OOP)**: Classes, objects, encapsulation, inheritance, polymorphism
- **Practice Problems**: Real-world logic challenges (e.g., voting eligibility, number sign checkers, day/month calculators, percentage calculations)
## 📁 Repository Structure


CodeWithCPP/
├── .vscode/                  # VS Code configuration (settings, tasks)
├── CMakeLists.txt            # Root CMake configuration
├── Code/                     # Core learning modules
│   ├── 2d-array/             # 2D array operations and examples
│   ├── array/                # 1D array operations and passing arrays to functions
│   ├── basic-c/              # Core syntax & "Hello World" (NamsteDuniya.cpp)
│   ├── chararray/            # Character arrays & string handling
│   ├── classes-objects/      # OOP basics (classes & objects)
│   ├── controlflowstatemwnt/ # Conditional logic & switch-case statements
│   ├── functions/            # Function definitions, parameters, and homework
│   ├── input/                # User input examples
│   ├── local-global-variable/# Scope of local and global variables
│   ├── loops/                # Looping constructs (while, do-while, continue)
│   ├── operators/            # Arithmetic, logical, and bitwise operators
│   ├── opps/                 # Advanced OOP concepts (Encapsulation, Inheritance, Polymorphism)
│   ├── passbyvalue-and-refrence/ # Pass by value vs. pass by reference
│   ├── pointers/             # Pointer operations & dynamic memory allocation (dml.cpp)
│   ├── reference-variable/   # Reference variables in C++
│   ├── string/               # Standard C++ string operations
│   ├── ternaryopertaors/     # Ternary operator examples
│   └── variable-datatypes/   # Variables, data types, and TypeCasting
└── problems/
    └── questions/            # Practice questions and logic challenges (e.g., Voting Eligibility, Check Number Sign, Calculate Percentage)

## 🚀 Getting Started

### Prerequisites
Install a C++ compiler and CMake:
- **Windows**: [MinGW-w64](https://www.mingw-w64.org/) and [CMake](https://cmake.org/)
- **macOS**: `xcode-select --install` and `brew install cmake`
- **Linux**: `sudo apt install build-essential cmake`

### Setup
1. Clone the repository:
   bash
   git clone https://github.com/imaakarsh/CodeWithCPP.git
   cd CodeWithCPP
   

2. **Build with CMake**:
   bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   

3. **Manual Compilation**:
   bash
   g++ Code/basic-c/NamsteDuniya.cpp -o NamsteDuniya
   ./NamsteDuniya  # Linux/macOS
   NamsteDuniya.exe  # Windows
   
## 💡 Example Code

### 1. Basic Syntax
cpp
// Code/basic-c/NamsteDuniya.cpp
#include <iostream>
int main() { 
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}


**Output:**

Hello Duniya


### 2. Pass by Value vs. Reference
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


**Output:**

aakarsh
aakarsh
rakarsh
aakarsh


### 3. Object-Oriented Programming (Inheritance)
cpp
// Code/opps/Inheritance/main.cpp
#include <iostream>
using namespace std;

class Vehicles
{
protected:
    string name;

public:
    string modle;
    int noOfTyres;

    string getName()
    {
        return this->name;
    }

    Vehicles(string _name, string _modle, int _noOfTyres)
    {
        cout << "Im Inside Vehicles ctor" << endl;
        this->name = _name;
        this->modle = _modle;
        this->noOfTyres = _noOfTyres;
    }

public:
    void start_engine()
    {
        cout << "Start The engine " << name << modle << endl;
    }

    void stop_engine()
    {
        cout << "Stop The engine " << name << modle << endl;
    }
    ~Vehicles(){
        cout << "Im inside Vehicle" << endl;
    }
};

class Car : public Vehicles
{
protected:
    int noOfdoors;
    string transmission;
 public:
    Car(string _name, string _modle, int _noOfTyres, int _noOfdoors, string _transmission) : Vehicles(_name, _modle, _noOfTyres)
    {
        cout << "Im Inside Car ctor" << endl;
        this->noOfdoors = _noOfdoors;
        this->transmission = _transmission;
    }

    void startAC()
    {
        cout << "Ac has been strted of" << name << endl;
    }
    ~Car(){
     cout << "Im inside Car dtor" << endl;
    }
};

class Motercycle: public Vehicles{
   protected:
        string handelbarStyle;
        string Suspenstion;
public:
        Motercycle(string _name, string _modle, int _noOfTyres,string _handelbarStyle, string _Suspenstion):Vehicles(_name,_modle,_noOfTyres){
        this-> handelbarStyle = _handelbarStyle;
        this -> Suspenstion = _Suspenstion;
    }
    void wheelie(){
        cout << "Whellie hahha" << name << endl;
    }

    ~Motercycle(){
        cout << "Im inside Motercyscle dtor" << endl;
    }
};
int main()
{
    Car A("Maruti800", "LXI", 4, 4, "manual");
    A.start_engine();
    A.startAC();
    Motercycle m("BMW","VXI",2,"U", "Hard");

    return 0;
}


**Output:**

Im Inside Vehicles ctor
Im Inside Car ctor
Start The engine Maruti800LXI
Ac has been strted ofMaruti800
Im Inside Vehicles ctor
Im inside Motercyscle dtor
Im inside Vehicle
Im inside Car dtor
Im inside Vehicle

## 🛠️ Key Features

- **Progressive Learning**: From basic syntax to advanced OOP and memory management
- **CMake Build System**: Standardized build configuration across all modules and practice problems
- **Hands-on Examples**: Ready-to-compile code for arrays (1D/2D), pointers, and control flow
- **Memory Management**: Practical dynamic memory allocation (DML) and pointer demonstrations
- **OOP Concepts**: Encapsulation, inheritance, polymorphism, and constructors/destructors
- **Practice Problems**: Dedicated questions folder containing real-world logic challenges
- **VS Code Integration**: Pre-configured tasks and settings for seamless development
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