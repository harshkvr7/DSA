#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
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

    for (int index = 0; index < len; index++)
    {
        if (nums[index] != index + 1)
        {
            return {nums[index], index + 1};
        }
    }

    return {0, 0};
}