#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    //       ****BRUTE****
    // for (int idx = 0; idx < nums.size(); idx++) {
    //     for (int jdx = idx + 1; jdx < nums.size(); jdx++) {
    //         if (nums[idx] + nums[jdx] == target) {
    //             return {idx, jdx};
    //         }
    //     }
    // }
    // return {};

    //       ****MAP****
    unordered_map<int, int> temp_map;

    for (int i = 0; i < nums.size(); i++)
    {
        if (temp_map.contains(target - nums[i]))
        {
            return {i, temp_map[target - nums[i]]};
        }
        else
        {
            temp_map[nums[i]] = i;
        }
    }

    return {};
}