#include <iostream>
using namespace std;

class Vehicle
{
public:
    string name;
    string model;
    int _noOfTyres;

    Vehicle(string name, string _model, int _noOfTyres)
    {
        this -> name = name;
        this -> model = _model;
        this -> _noOfTyres = _noOfTyres;
    }

public:
    void start_engine()
    {
        cout << "start the engine" << name << endl;
    }

    void stop_engine()
    {
        cout << "stop the engine" << name << endl;
    }
};

class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissonTypes; 
     
    Car(int )

    void startAC()
    {
        cout << "AC has tsrted of " << name << endl;
    }
};
int main()
{
    Car A 
    return 0;
}