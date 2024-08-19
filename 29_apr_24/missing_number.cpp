#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int len = nums.size();

    int idx = 0;

    while (idx < len)
    {
        if (nums[idx] > len - 1)
        {
            idx++;
        }
        else if (nums[idx] == idx)
        {
            idx++;
        }
        else
        {
            swap(nums[idx], nums[nums[idx]]);
        }
    }

    for (int index = 0; index < len; index++)
    {
        if (nums[index] != index)
        {
            return index;
        }
    }

    return nums.size();

    // BIT MANIPULATION
    // int xorSum = 0;

    // for (int num : nums) {
    //     xorSum ^= num;
    // }

    // for (int i = 0; i <= nums.size(); i++) {
    //     xorSum ^= i;
    // }

    // return xorSum;
}