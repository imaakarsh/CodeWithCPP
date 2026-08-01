#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;

public:
    abc()
    {
        x = 0;
        y = new int(0);
    }

    int getX(){
        return x;
    }
    void setX(int _val){
        x = _val;
    }
    int getY(){
        return *y;
    }

    void setY(int _val){
        *y = _val;
    }
};

int main()
{
    abc a;
    cout << a.getX() << endl;
    return 0;
}

int main2()
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
    // int *const a = new int(2);
    // *a = 20;
    // cout << *a;
    // int b = 50;
    // // a = &b; -> nhi chlega

    // // const varaible const data;
    // const int *const a = new int(10);
    // cout << *a << endl;

    // return 0;
}