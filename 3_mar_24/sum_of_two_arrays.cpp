#include <bits/stdc++.h>

using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;

    int carry = 0;

    while (a.size() < b.size())
    {
        a.insert(a.begin(), 0);
    }

    while (b.size() < a.size())
    {
        b.insert(b.begin(), 0);
    }

    for (int i = a.size() - 1; i >= 0; --i)
    {
        int dig1 = a[i];
        int dig2 = b[i];

        int sum = dig1 + dig2 + carry;

        ans.push_back(sum % 10);

        carry = sum / 10;
    }
    if (carry > 0)
    {
        ans.push_back(carry);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}