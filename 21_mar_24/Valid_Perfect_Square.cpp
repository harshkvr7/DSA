#include <bits/stdc++.h>
using namespace std;

// using binary search
bool isPerfectSquare(int num)
{
    int left = 1;
    int right = num;

    while (left <= right)
    {
        int mid = (right - left) / 2 + left;

        if (num / mid == mid && num % mid == 0)
        {
            return true;
        }
        else if (num / mid > mid)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return false;
}