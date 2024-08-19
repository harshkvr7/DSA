#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    int min_possible = 0;
    int max_possible = 0;

    int sml = arr[0] + k;
    int lar = arr[n - 1] - k;

    //same logic as minimize heights 1 but we cant use numbers smaller than 0 after subtracting k

    for (int idx = 0; idx < n - 1; ++idx)
    {
        min_possible = min(sml, arr[idx + 1] - k);
        max_possible = max(arr[idx] + k, lar);

        if (min_possible < 0)
        {
            continue;
        }

        ans = min(ans, max_possible - min_possible);
    }

    return ans;
}