#include <iostream>
using namespace std;
int main()
{

    int arr[10] = {1, 2, 3, 4, 1, 34, 43, 1, 9, 2};
    int len = sizeof(arr) / sizeof(int);
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max value is " << max << " Min value is " << min;

    return 0;
}