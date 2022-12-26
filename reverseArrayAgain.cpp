#include <iostream>
using namespace std;

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
    int size = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        swap(arr[e], arr[s]);
        e--;
        s++;

    }
    printArray(arr,size);


    return 0;
}