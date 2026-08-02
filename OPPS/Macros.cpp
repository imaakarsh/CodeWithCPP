#include <iostream>
using namespace std;
#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float circleArea(int r)
{
    return PI * r * r;
}

void fun(){
    int a;
}
int main()
{

    float area = circleArea(3);
    cout << area << endl;

    return 0;
}