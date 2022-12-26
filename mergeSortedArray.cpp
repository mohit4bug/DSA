#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void mergeArray(int one[], int n, int two[], int m)
{
    int i = 0;
    int j = 0;
    int k = 0;

    int third[n + m];

    while (i < n && j < m)
    {
        if (one[i] <= two[j])
        {
            third[k++] = one[i++];
        }
        else
        {
            third[k++] = two[j++];
        }
    }

    while (i < n)
    {
        third[k++] = one[i++];
    }
    while (j < m)
    {
        third[k++] = two[j++];
    }

    printArray(third, n + m);
}

int main()
{

    int one[] = {1, 3, 5, 7, 9, 11};
    int two[] = {2, 4, 6, 8};

    int n = 6;
    int m = 4;

    mergeArray(one, n, two, m);

    return 0;
}