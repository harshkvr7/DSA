#include <bits/stdc++.h>
using namespace std;

int smallestRangeI(vector<int> &nums, int k)
{
    int len = nums.size();
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    for (int idx = 0; idx < len; idx++)
    {
        mini = min(mini, nums[idx]);
        maxi = max(maxi, nums[idx]);
    }

    // if the difference between the maximum and minimum elements is less than 2 times k , subtracting
    // k from both will make their difference 0(minimum difference possible)
    if (maxi - mini <= 2 * k)               
    {
        return 0;
    }
    else
    {
        return (maxi - mini - 2 * k);
    }
}