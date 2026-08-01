#include <iostream>
using namespace std;

int main()
{
    // const int x = 5; // x is const
    // init can be done;
    // x  = 10;
    // cout << x << endl;

    // 2. cons with pointers
    // const int *a = new int(2); // const data , non const pointer

    // *a = 3;
    // cout << *a << endl;
    // delete a;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    // CONST pointer , but non constant data.
    int *const a = new int(2);
    *a = 20;
    cout << *a;
    int b = 50;
    // a = &b; -> nhi chlega

    // const varaible const data;
    const int *const a = new int(10);
    cout << *a << endl;

    return 0;
}