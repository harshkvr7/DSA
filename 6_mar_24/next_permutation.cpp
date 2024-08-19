#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int idx = nums.size() - 2;

    while (idx >= 0 && nums[idx] >= nums[idx + 1])
    {
        idx--;
    }
    
    if (idx >= 0)
    {
        int jdx = nums.size() - 1;

        while (nums[jdx] <= nums[idx])
        {
            jdx--;
        }

        swap(nums[idx], nums[jdx]);
    }

    reverse(nums.begin() + idx + 1, nums.end());
}