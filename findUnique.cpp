#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
    int elem = 0;
    for (int i = 0; i < size; i++)
    {
        elem = elem ^ arr[i];
    }

    return elem;
}
int main()

{
    int arr[] = {1, 4, 4, 7, 7, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    int elem = findUnique(arr, size);
    cout << elem;

    return 0;
}