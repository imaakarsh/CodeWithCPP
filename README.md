
# CodeWithCPP

A structured learning repository for mastering C++ programming through practical examples. This project provides a progressive path from basic syntax to advanced concepts like Object-Oriented Programming (OOP) and memory management.

---

## 📚 Learning Path

### Core Concepts
- **Fundamentals**: Variables & data types, operators, input/output, and type casting
- **Control Flow**: Conditionals, loops (for/do-while/continue), ternary operators, and switch-case
- **Functions**: Parameter passing (value/reference), scope (local/global variables)
- **Data Structures**: Arrays (1D/2D), character arrays, and standard strings
- **Memory Management**: Pointers, reference variables, and dynamic memory allocation (DML)
- **Object-Oriented Programming (OOP)**: Classes, objects, encapsulation, inheritance, static/const members, macros, and deep/shallow copy
- **Practice Problems**: Real-world logic challenges (e.g., voting eligibility, number sign checkers, day/month calculators)

## 📁 Repository Structure


CodeWithCPP/
├── .vscode/                  # VS Code configuration (settings, tasks)
├── 2D Array/                 # 2D array operations and examples
├── Array/                    # 1D array operations and passing arrays to functions
├── Basic-C++/                # Core syntax & "Hello World"
├── CharArray/                # Character arrays & string handling
├── Classes-Objects/          # OOP basics (classes & objects)
├── ControlFlowStatemwnt/     # Conditional logic & switch-case statements
├── Functions/                # Function definitions, parameters, and homework
├── Input/                    # User input examples
├── Local-Global Variable/    # Scope of local and global variables
├── Loops/                    # Looping constructs (while, do-while, continue)
├── OPPS/                     # Advanced OOP concepts
│   ├── Encapsulation/        # Access control, const, static, shallow/deep copy
│   └── Inheritance/          # Inheritance demonstrations
├── Operators/                # Arithmetic, logical, and bitwise operators
├── Passbyvalue&Refrence/     # Pass by value vs. pass by reference
├── Pointers/                 # Pointer operations & dynamic memory allocation (DML)
├── Questions/                # Practice questions and logic challenges
├── Reference Variable/       # Reference variables in C++
├── String/                   # Standard C++ string operations
├── TernaryOpertaors/         # Ternary operator examples
├── TypeCasting/              # Implicit/explicit type conversion
└── Variable-Datatypes/       # Variables and data types


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
cpp
// Basic-C++/NamsteDuniya.cpp
#include <iostream>
int main() { 
    std::cout << "Hello Duniya" << std::endl;
    return 0;
}


**Output:**

Hello Duniya


### 2. Pass by Value vs. Reference
cpp
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


**Output:**

aakarsh
aakarsh
rakarsh
aakarsh


### 3. Object-Oriented Programming (Inheritance)
cpp
// OPPS/Inheritance/init2.cpp
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
- **Hands-on Examples**: Ready-to-compile code for arrays (1D/2D), pointers, and control flow
- **Memory Management**: Practical dynamic memory allocation (DML) and pointer demonstrations
- **OOP Concepts**: Encapsulation, inheritance, static/const members, and shallow/deep copying
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