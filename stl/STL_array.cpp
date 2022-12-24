#include <iostream>
#include<array>
using namespace std;
int main()
{

    // Basic array
    int basic[3] = {1,2,4};

    // Array stl (Implements simple array)
    array<int,3> arr = {1,2,3};

    // size 
    cout<<arr.size()<<endl;

    // access by index
    cout<<arr.at(2)<<endl;

    // Empty or not 
    cout<<arr.empty()<<endl;

    // access first and last element
    cout<<arr.front();
    cout<<arr.back();
    return 0;
}