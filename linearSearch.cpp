#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value;
    cout << "Enter the value you want to search: ";
    cin >> value;
    cout << linearSearch(arr, 10, value);

    return 0;
}