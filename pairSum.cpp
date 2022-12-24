#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 4, 2, 5, 6, 7};
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == 5)
            {
                cout << arr[i] << " " << arr[j] << endl; 
            }
        }
    }
    return 0;
}