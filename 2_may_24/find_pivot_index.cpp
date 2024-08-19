#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int sum = 0;
    int suff = 0;

    for (int idx = 0; idx < nums.size(); idx++)
    {
        suff += nums[idx];
    }

    for (int idx = 0; idx < nums.size(); idx++)
    {
        sum += nums[idx];

        if (sum == suff)
        {
            return idx;
        }

        suff -= nums[idx];
    }

    return -1;
}