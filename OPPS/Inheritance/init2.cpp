#include <iostream>
using namespace std;

class Vehicals
{
public:
    string name;
    string modle;
    int noOfTyres;

    Vehicals(string _name, string _modle, int _noOfTyres)
    {
        cout << "Im Inside Vehicals ctor" << endl;
        this->name = _name;
        this->modle = _modle;
        this->noOfTyres = _noOfTyres;
    }

public:
    void start_engine()
    {
        cout << "Start The engine" << name << modle << endl;
    }

    void stop_engine()
    {
        cout << "Stop The engine" << name << modle << endl;
    }
};

class Car : public Vehicals
{
public:
    int noOfdoors;
    string transmission;

    Car(string _name, string _modle, int _noOfTyres, int _noOfdoors, string _transmission) : Vehicals(_name, _modle, _noOfTyres)
    {
        cout << "Im Inside Car ctor" << endl;
        this->noOfdoors = _noOfdoors;
        this->transmission = _transmission;
    }

    void startAC()
    {
        cout << "Ac has been strted of" << name << endl;
    }
};
int main()
{
    Car A("Maruti800", "LXI", 4, 4, "manual");
    A.start_engine();
    A.startAC();
        return 0;
}