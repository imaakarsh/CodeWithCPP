#include <iostream>
using namespace std;

void number();

int main()
{
    number();
    number();
    return 0;
}
void number()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << endl;
    }
}
