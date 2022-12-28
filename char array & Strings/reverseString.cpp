#include <iostream>
using namespace std;

void revString(char name[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        swap(name[s++], name[e--]);
        
    }
}

int main()
{

    char name[100];
    cout << "Enter your name: ";
    cin >> name;

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    revString(name, len);

    cout << "Your reverse name is: " << name;

    return 0;
}