#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, base;

    cin >> num1 >> num2 >> base;

    int ans = 0;
    int prod = 1;

    while (num1)
    {
        int dig1 = num1 % 10;
        int carry = 0;
        int temp_ans = 0;
        int temp_prod = 1;
        int original_num2 = num2;

        while (num2)
        {
            int dig2 = num2 % 10;
            int product = dig1 * dig2 + carry;

            temp_ans += (product % base) * temp_prod;
            carry = product / base;

            num2 /= 10;
            temp_prod *= 10;
        }

        temp_ans += carry * temp_prod; 

        ans += temp_ans * prod; 

        num1 /= 10;
        prod *= 10;

        num2 = original_num2;
    }

    cout << ans;

    return 0;
}

