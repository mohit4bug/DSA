#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // Works on last in first out principle
    stack<string> names;

    names.push("Mohit");
    names.push("Shubha");
    names.push("Nikhil");
    names.push("Kuldeep");
    names.push("Ravi");

    cout<<"Top element is: "<<names.top();

    cout<<"Size of stack: "<<names.size();

    cout<<"Empty or not: "<<names.empty();

    

    return 0;
}