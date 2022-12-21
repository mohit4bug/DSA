#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {6, 2, 1, 3, 5, 10};
    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);

    printArray(arr, size);
    return 0;
}