#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    int closest_sum = INT_MAX;
    int min_diff = INT_MAX;

    for (int idx = 0; idx < nums.size() - 2; idx++)
    {
        int left = idx + 1;
        int right = nums.size() - 1;

        while (left < right)
        {
            int sum = nums[idx] + nums[left] + nums[right];
            int diff = abs(sum - target);

            if (diff < min_diff)
            {
                min_diff = diff;
                closest_sum = sum;
            }

            if (sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                return sum;
            }
        }
    }

    return closest_sum;
}