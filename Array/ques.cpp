#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int i, sum = 0;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter The Element arr[" << i << "]";
        cin >> arr[i];
    }

    for (i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}