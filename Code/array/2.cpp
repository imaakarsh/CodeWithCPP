#include <iostream>
using namespace std;
void printarr(int arr[], int size);
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 4;
    printarr(arr, size);
}

void printarr(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << endl;
    }
}