#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    int len = nums.size();

    int idx = 0;

    while (idx < len)
    {
        if (nums[idx] > 0 && nums[idx] < len + 1 && nums[idx] != idx + 1 && nums[nums[idx] - 1] != nums[idx])
        {
            swap(nums[idx], nums[nums[idx] - 1]);
        }
        else
        {
            idx++;
        }
    }

    int ans = 1;

    for (int index = 0; index < len; index++)
    {
        if (nums[index] == ans)
        {
            ans++;
        }
    }

    return ans;
}