#include <iostream>
using namespace std;

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

    int arr[] = {15, 19, 20, 1, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    int pivotElemIndex = findPivot(arr, size);
    cout << "The pivot element is " << arr[pivotElemIndex] << " At index " << pivotElemIndex;

    return 0;
}