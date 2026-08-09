#include <iostream>
using namespace std;
void solve(string str)
{
    cout << str << endl;
    str[0] = 'r';
    cout << str << endl;
}
int main()
{

    string str = "aakarsh";
    cout << str << endl;
    solve(str);
    cout << str << endl;
    return 0;
}
