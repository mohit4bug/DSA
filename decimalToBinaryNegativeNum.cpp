#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    // This code only works with negative integers
    int n, ans = 0, i = 0;
    cout << "Enter the value: ";
    cin >> n;
    n = n * -1;

    while (i < 10)
    {
        int bit = (n & 1) ^ 1;
        if (bit)
        {
            ans = bit * pow(10, i) + ans;
        }
        n = n >> 1;
        i++;
    }

    cout << ans;

    return 0;
}