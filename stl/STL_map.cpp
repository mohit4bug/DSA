#include <iostream>
#include <map>

using namespace std;
int main()
{
    // This is sorted map
    map<int, string> m;

    // first way to insert
    m[1] = "Mohit";
    m[7] = "shubha";
    m[2] = "Khatri";

    // second way to insert
    m.insert({5, "khowal"});
    m.insert({8, "Nikhil"});

    for (auto x : m)
    {
        cout << x.first << " ";
    }

    cout<<endl;
    // Is 2 present
    // cout << "Finding 2: " << m.count(2);

    m.erase(1);

    for (auto x : m)
    {
        cout << x.first << " ";
    }

    return 0;
}