#include <iostream>
#include <string>
using namespace std;

class vehicle
{
    string name;
    string model;
    int notyres;

public:
    void start_engine()
    {
        cout << "Engine is starting" << name << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stoping" << name << endl;
    }
};

class car : public vehicle
{
public:
    int noOfdoor;
    string transmissonTypes;

    void start_ac()
    {
        cout << "AC has strted of " << name << endl;
    }
};
int main()
{

    return 0;
}