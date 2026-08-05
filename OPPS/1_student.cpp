#include <iostream>
#include <string>
using namespace std;

class Student()
{
public:
    // attributes
    int id;
    int age;
    string name;
    int nos;

private:
    int *gpa;
    string gf;

public:
    // ctor:default
    
    // behaviour // method / function
    void study()
    { 
        cout << this->name << "Studying" << endl;
    }
    void sleep()
    {
        cout << this->name << "Sleeping" << endl;
    }
    // DTOR
    ~Student()
    {
        cout << "Student default ctor" << endl;
    }
    Student(int id , )
    private:
    void gfchat(){
        cout << this->name << "chatting" << endl;
    }
};

int main()
{
    // Student A;
    // A.id = 1;
    // A.name = "Aakarsh";
    // A.nos = 6;
    // A.study();

    // Student b;
    // b.id = 1;
    // b.name = "Aakarsh";
    // b.nos = 6;
    // b.sleep();
    Student A();
    return 0;
}