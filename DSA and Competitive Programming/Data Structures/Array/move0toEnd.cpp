#include <iostream>
#include <cmath>
using namespace std;

void moveZeroToleft(int *arr, int &size)
{
    int z_start = 0;
    int nonZerCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonZerCount]);
            nonZerCount++;
        }
    }
}

int main()
{

    int arr[] = {1, 0, 2, 0, 3, 4, 0, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Moving" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    moveZeroToleft(arr, size);

    cout << "After Moving" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}