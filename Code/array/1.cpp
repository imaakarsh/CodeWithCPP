#include <iostream>
using namespace std;

int main()
{

    // // declaration
    // int arr[4];
    // // initialize
    // int arr1[5] = {10, 20, 30, 40, 50};

    // cout << arr1 << endl;

    //  traverse
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter The Value for arr[" << i << "]:";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << " ";

    return 0;
}