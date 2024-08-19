#include <bits/stdc++.h>
using namespace std;

void twoSum(int idx, vector<vector<int>> &ans, vector<int> &nums)
{
    int lo = idx + 1;
    int hi = nums.size() - 1;

    while (lo < hi)
    {
        int sum = nums[idx] + nums[lo] + nums[hi];

        if (sum < 0)
        {
            lo++;
        }
        else if (sum > 0)
        {
            hi--;
        }
        else
        {
            ans.push_back({nums[idx], nums[lo], nums[hi]});

            lo++;
            hi--;

            // moving the left pointer to avoid duplicates
            while (lo < hi && nums[lo - 1] == nums[lo])
            {
                lo++;
            }
        }
    }
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;

    int len = nums.size();

    sort(begin(nums), end(nums));

    for (int idx = 0; idx < len; idx++)
    {
        if (idx == 0 || nums[idx] != nums[idx - 1])
        {
            twoSum(idx, ans, nums);
        }
    }

    return ans;
}