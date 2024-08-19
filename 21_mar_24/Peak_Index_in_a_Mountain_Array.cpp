#include <bits/stdc++.h>
using namespace std;

// using binary search
int peakIndexInMountainArray(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int m = (left + right) / 2;

        if (arr[m] > arr[m + 1])
        {
            right = m;
        }
        else
        {
            left = m + 1;
        }
    }

    return left;
}