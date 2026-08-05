#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    float *gpa;
    string gf;

public:
    int id;
    int age;
    string name;
    int nos;

    // Setter
    void setgpa(float a)
    {
        *gpa = a;
    }

    // Getter
    float getgpa()
    {
        return *gpa;
    }

    // Getter
    int getage()
    {
        return age;
    }

    // Parameterized Constructor
    Student(int id, int age, string name, int nos, float gpa, string gf)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    // Destructor
    ~Student()
    {
        delete gpa;
    }
};

int main()
{
    Student A(1, 12, "Pavni", 5, 7.8, "Mennu");

    A.setgpa(6.7);

    cout << "GPA: " << A.getgpa() << endl;
    cout << "Age: " << A.getage() << endl;

    return 0;
}