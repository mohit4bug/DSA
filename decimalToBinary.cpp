#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int value, ans = 0, i = 0;
    cout << "Enter the value: ";
    cin >> value;

    while (value != 0)
    {
        int bit = value & 1;
        ans = bit * pow(10, i) + ans;
        value = value >> 1;
        i++;
    }

    cout << "The binary representation is: " << ans;

    return 0;
}