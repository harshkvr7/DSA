#include <bits/stdc++.h>
using namespace std;

//   ***USING 2 POINTERS***
int maxArea(vector<int> &height)
{
    int maxArea = 0;
    int left = 0, right = height.size() - 1;

    while (left < right)
    {
        int high = min(height[left], height[right]);
        int wide = right - left;

        maxArea = max(maxArea, high * wide);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return maxArea;
}