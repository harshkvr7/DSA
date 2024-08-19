#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    // minimum difference possible between the smallest and largest number after 
    // adding or subtracting k is the minimum difference between the minimun and largest
    // numbers which are smaller than minimum number + k and larger than maximum number - k 
    for (int idx = 0; idx < n - 1; ++idx)
    {
        int min_possible = min(arr[0] + k, arr[idx + 1] - k);
        int max_possible = max(arr[idx] + k, arr[n - 1] - k);

        ans = min(ans, max_possible - min_possible);
    }

    return ans;
}