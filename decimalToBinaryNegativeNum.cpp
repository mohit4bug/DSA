#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value: ";
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;
        int oppBit = !bit;
        cout << oppBit;
        n = n >> 1;
    }
    return 0;
}