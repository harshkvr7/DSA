#include <bits/stdc++.h>
using namespace std;

// using binary search
int firstBadVersion(int n)
{
    int low = 1;
    int high = n;
    int mid;

    if (n == 1)
    {
        return 1;
    }

    while (low <= high)
    {
        mid = (high - low) / 2 + low;

        if (isBadVersion(mid) == true)
        {
            if (isBadVersion(mid - 1) == false)
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        else
        {
            low = mid + 1;
        }
    }

    return n;
}