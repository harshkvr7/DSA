#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

string largestNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), compare);

    string ans = "";

    for (auto num : nums)
    {
        ans += to_string(num);
    }

    if (ans[0] == '0')
        return "0";

    return ans;
}