#include <iostream>
#include <deque>
using namespace std;
int main()
{

    // Insertion and deletion can be performed from both ends
    deque<int> d;

    // Insertion
    d.push_back(1);
    d.push_front(2);

    for (int elem : d)
    {
        cout << elem << " ";
    }
    cout << d.at(1) << endl;

    // First and last element 
    cout << d.front();
    cout << d.back();

    // Empty or not
    cout << d.empty();

    // Empty the double ended queue
    d.erase(d.begin(),d.end());
    // For deleting first element only
    d.erase(d.begin(),d.begin()+1);


    // Deletion
    d.pop_back();
    d.pop_front();



    return 0;
}