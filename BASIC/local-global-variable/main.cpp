#include <iostream>
using namespace std;

int x = 2; // GLOBAL

void fun(){
    int x = 60;
}

int main()
{
    int x = 30; // local to main() fn.
    cout << x << endl;
    cout << ::x << endl; // accessing global with ::

    {
        int x = 50;
        cout << x << endl;
    }
    return 0;
}