// It is simply a doubly linked list
// no direct access > only traversal

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(19);
    for (int elem : l)
        cout << elem << " ";

    cout << endl;

    l.erase(l.begin()); // --> l.begin() > begin is itrator
    for (int elem : l)
        cout << elem << " " << endl;

    cout << "size of list " << l.size();



    list<int> n(l); // copied l list in n list
    list<int> n2(5,1000); // size 5 , all indices assigned by 1000

    for(int elem:n2) cout<<elem<<" ";

    return 0;
}