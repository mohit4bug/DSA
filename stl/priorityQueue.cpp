#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // Max heap --> when we fetch data it always return the largest value
    priority_queue<int> maxi;

    // Min heap --> when we fetch data it always return the smallest value
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(9);
    maxi.push(5);
    maxi.push(7);
    maxi.push(8);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }


    cout<<endl;

    // For min heap 
    mini.push(9);
    mini.push(5);
    mini.push(7);
    mini.push(8);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }



    cout<<"Empty hai kya ?"<<maxi.empty();
    return 0;
}