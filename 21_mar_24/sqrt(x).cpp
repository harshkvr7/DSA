#include <bits/stdc++.h>
using namespace std;

// using binary search
int mySqrt(int x)
{
    int left = 0;
    int right = x;

    int ans = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;

        if (mid * mid == x)
        {
            return mid;
        }

        if (left == right && mid * mid > x)
        {
            break;
        }

        if (mid * mid < x)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return ans;
}