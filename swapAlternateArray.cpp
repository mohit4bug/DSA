#include <iostream>
using namespace std;

void swapAlt(int arr[], int size)
{
    int i = 0;
    while (size > i + 1)
    {
        int j = i + 1;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i = i + 2;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(int);
    swapAlt(arr, len);
    printArray(arr, len);

    return 0;
}