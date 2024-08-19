#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int len = nums.size();

    int idx = 0;

    while (idx < len)
    {
        if (nums[idx] < len + 1 && nums[idx] != idx + 1 && nums[nums[idx] - 1] != nums[idx])
        {
            swap(nums[idx], nums[nums[idx] - 1]);
        }
        else
        {
            idx++;
        }
    }

    return nums[len - 1];
}