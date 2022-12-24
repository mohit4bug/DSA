#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // Array must be sorted in binary search

    int arr[] = {34, 60, 61, 67, 78, 89, 92, 99, 104, 106, 901, 1000, 1024, 5002, 9000};
    int key;
    int size = sizeof(arr) / sizeof(int);
    cout << "Enter the value you want to search: ";
    cin >> key;
    int elemIndex = binarySearch(arr, size, key);
    cout << "Your element is present at index: " << elemIndex;

    return 0;
}