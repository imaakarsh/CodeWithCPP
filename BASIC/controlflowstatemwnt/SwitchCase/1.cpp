#include <iostream>
using namespace std;

int main()
{

    char grad;
    cout << "enter your grade" << endl;
    cin >> grad;

    // if (grad == 'A')
    // {
    //     cout << "ur marks in range 90" << endl;
    // }
    // else if (grad == 'B')
    // {
    //     cout << "ur marks in range 80" << endl;
    // }
    // else if (grad == 'C')
    // {
    //     cout << "ur marks in range 70" << endl;
    // }
    // else if (grad == 'D')
    // {
    //     cout << "ur marks in range 60" << endl;
    // }
    // else
    // {
    //     cout << "ur marks in range 50" << endl;
    // }

    switch (grad)
    {
    case 'A':
        cout << "ur marks in range 90" << endl;
        break;
    case 'B':
        cout << "ur marks in range 80" << endl;
        break;
    case 'C':
        cout << "ur marks in range 70" << endl;
        break;
    case 'D':
        cout << "ur marks in range 60" << endl;
        break;
    default:
        cout << "ur marks in range 50" << endl;
    }
    return 0;
}