#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int &temp = a;

    cout << temp << endl;
    cout << a << endl;
}