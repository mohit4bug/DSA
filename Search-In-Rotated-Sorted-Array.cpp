#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key, int start, int end)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int findPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start != end)
    {
        int mid = (start + end) / 2;

        if (arr[0] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int arr[] = {50, 60, 60, 1, 2, 3, 9};
    int size = sizeof(arr) / sizeof(int);
    int pivotElemIndex = findPivot(arr, size);
    int key;
    cout << "Enter the value: ";
    cin >> key;

    if (key >= arr[pivotElemIndex] && key <= arr[size - 1])
    {
        int ans = binarySearch(arr, size, key, pivotElemIndex, size - 1);
        cout << ans;
    }
    else
    {
        int ans = binarySearch(arr, size, key, 0, pivotElemIndex);
        cout << ans;
    }
    return 0;
}