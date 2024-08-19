#include <bits/stdc++.h>
using namespace std;

void multiply(int n, vector<int> &number)
{
    int carry = 0;

    for (int idx = 0; idx < number.size(); idx++)
    {
        int num = n * number[idx];

        number[idx] = (char)((num + carry) % 10);
        carry = (num + carry) / 10;
    }

    while (carry)
    {
        number.push_back(carry % 10);
        carry /= 10;
    }
}
vector<int> factorial(int N)
{
    vector<int> number;

    number.push_back(1);

    for (int idx = 2; idx <= N; idx++)
    {
        multiply(idx, number);
    }

    reverse(number.begin(), number.end());

    return number;
}