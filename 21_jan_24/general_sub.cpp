#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, base;

    cin >> num1 >> num2 >> base;

    int ans = 0;
    int prod = 1;
    int diff = 0;
    int borrow = 0;

    while (num1 || num2)
    {
        int dig1 = num1 % 10;
        int dig2 = num2 % 10;

        dig1 -= borrow;

        if (dig1 < dig2)
        {
            dig1 += base;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        diff = dig1 - dig2;

        ans += diff * prod;

        num1 /= 10;
        num2 /= 10;

        prod *= 10;
    }

    cout << ans;

    return 0;
}
