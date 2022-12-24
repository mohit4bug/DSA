#include <iostream>
using namespace std;

int findDup(int arr[], int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{

    int arr[] = {6, 3, 1, 5, 4, 3, 2};
    int size = sizeof(arr) / sizeof(int);
    int res = findDup(arr, size);
    cout << res;

    return 0;
}