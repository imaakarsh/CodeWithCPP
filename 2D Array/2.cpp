#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{2, 2, 2}, {3, 3, 3}, {
                                               4,
                                               4,
                                               4,
                                           }};

    int row = 3;
    int col = 3;

    for (int rowindex = 0; rowindex <= row - 1; rowindex++)
    {
        for (int colindex = 0; colindex <= col - 1; colindex++)
        {
            cout << arr[rowindex][colindex] << " ";
        }
        cout << endl;
    }
    return 0;
}