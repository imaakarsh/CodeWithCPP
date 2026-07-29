#include <iostream>
using namespace std;
void printarr(int arr[], int size);

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = 4;
    printarr(arr, size);
    // int sum = array(5,5);
    // cout << sum << endl;

    return 0;
}

void printarr(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}
