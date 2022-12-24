#include <iostream>
#include <set>
using namespace std;
int main()
{

    // Takes only unique values
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    // For printing all values of set
    for (auto i : s)
    {
        cout << i << endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    // Erase by iterator
    s.erase(it);

    // checks if the element is present or not
    cout << "-5 is present or not >" << s.count(-5) << endl;
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}