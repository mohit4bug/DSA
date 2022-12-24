#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n, i = 0, ans = 0;
    cout << "Enter the value in binary: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }

    cout << "The value is decimal is: " << ans;
    return 0;
}