#include <iostream>
#include <math.h>
using namespace std;

int isPowerOF2(int value)
{
    int i = 0;
    while (i < 31)
    {
        int ans = pow(2, i);

        if (ans == value)
        {
            return true;
        }
        i++;
    }
    return false;
}

int main()
{

    int n, i = 0;
    cout << "Enter the value: ";
    cin >> n;
    int result = isPowerOF2(n);
    cout << result;

    return 0;
}