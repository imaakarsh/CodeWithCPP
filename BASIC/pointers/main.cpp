#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    cout << &a << endl;
    int *ptr = &a;
    cout << &a << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

    return 0;
}