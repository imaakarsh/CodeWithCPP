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
    // A.name()
    Motercycle m("BMW","VXI",2,"U", "Hard");

    return 0;
}