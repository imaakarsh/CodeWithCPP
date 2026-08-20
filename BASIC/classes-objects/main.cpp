#include <iostream>
using namespace std;

// class creation 
class Student{
    public:
    int age;
    int weight;
    int height;
    string name;
    

    //default constructure
    Student(){
        cout << "object init krdunga" << endl;
        age = 0;
        weight = 3;
        height = 45;
        name = "dummy";
     }

     //parameterised constructor
     Student(int myAge , int myWeight, int myHeaight , string myName){
        cout << "im a inside param const" << endl;
        age = myAge;
        height  = myHeaight;
        weight = myWeight;
        name = myName;
     }

};

int main() {
    // cout << sizeof(student) << endl;

    //OBJECT CREATION

    // sTATIC WAY         
    // Student s1;

    
    // dynamic way
    // Student* s = new Student;

    Student a;

    return 0;
}