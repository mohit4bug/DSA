#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    bool isSwap = false; // IF NONE OF THE ELEMENT SWAPPED WE RETURN FROM THE FUNCTION
    for (int i = 1; i < size; i += 1)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            isSwap = true; // IF SWAPPED THEN isSwap = true
        }
        if (!isSwap) // IF SWAPPED IS FALSE JUST RETURN ...
            return;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 1)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {6, 2, 3, 1, 7, 8, 9, 0};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}