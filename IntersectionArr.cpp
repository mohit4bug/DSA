#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> const &ans)
{
    std::cout << "The vector elements are : ";

    for (int i = 0; i < ans.size(); i++)
        std::cout << ans.at(i) << ' ';
}

int main()
{
    // Works on code studio coz of i don't know stl yet 
    vector<int> ans;
    int arr1[] = {1, 2, 3, 5, 6, 7, 8, 10, 11};
    int arr2[] = {5, 6, 7, 9, 10};
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    int i = 0, j = 0;
    while (i < n && i < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    print(ans);
    return 0;
}