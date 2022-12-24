// Vector is dynamic array which doubles the size if overflows, how ?
// It notice that the array if full, then creates another array double of size of old one
// then replace that with the old array
// then dead the old array (delete)
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // size --> Number of elements vertor have
    // capacity --> Allocation size

    vector<int> v;
    // To check the capacity (initial capacity is 0)
    cout << v.capacity() << endl;

    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << v.capacity() << endl;

    // Lets try to push an element
    v.push_back(11);
    cout << v.capacity() << endl; // Here the capacity will be doubled

    // removes the last element
    v.pop_back();

    // First and last element
    cout << v.front();
    cout << v.back();

    // size of vector
    cout << v.size();

    // accessing element by index
    v.at(0);

    // vector initializaing by telling size
    vector<int> v2(10, 5); // --> 10 is the size // --> 5 will be assigned in all indexes

    // Kind of foreach loop
    for(int elem:v2){
        cout<<elem<<" ";
    }


    // To copy another vector in new vector

    vector<int> last(v2); // --> 'v2' is copied in 'last' vector
    return 0;
}