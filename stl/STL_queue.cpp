#include<queue>
#include <iostream>
using namespace std;
int main()
{

    queue<string> q;

    q.push("Mohit");
    q.push("khatri");
    q.push("Vandana");

    cout<<"size of queue: "<<q.size();

    cout<<"First element: "<<q.front();

    cout<<"Last element: "<<q.back();
     
    return 0;
}