#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, base;

    cin >> num1 >> num2 >> base;

    int ans = 0;
    int prod = 1;
    int sum = 0;
    int carry = 0;

    while (num1 || num2 || carry)
    {
        int dig1 = num1 % 10;
        int dig2 = num2 % 10;

        sum = dig1 + dig2 + carry;

        ans += (sum % base) * prod;

        carry = sum / base;

        num1 /= 10;
        num2 /= 10;

        prod *= 10;
    }

    cout << ans;

    return 0;
}
