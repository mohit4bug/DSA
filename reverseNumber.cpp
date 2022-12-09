#include <iostream>
using namespace std;
int main()
{

    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }

    cout << "The reverse number: " << ans;

    return 0;
}