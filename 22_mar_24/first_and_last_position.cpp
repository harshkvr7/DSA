#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    vector<int> ans = {-1, -1};

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            if (mid == 0)
            {
                ans[0] = mid;

                break;
            }
            else if (nums[mid - 1] == target)
            {
                right = mid - 1;
            }
            else
            {
                ans[0] = mid;

                break;
            }
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    left = 0;
    right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            if (mid == nums.size() - 1)
            {
                ans[1] = mid;

                break;
            }
            else if (nums[mid + 1] == target)
            {
                left = mid + 1;
            }
            else
            {
                ans[1] = mid;

                break;
            }
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}