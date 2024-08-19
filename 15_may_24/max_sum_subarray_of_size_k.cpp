#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    int start = 0, end = 0;
    long long sum = 0, ans = INT_MIN;

    while (end < K)
    {
        sum += Arr[end++];
    }

    ans = max(ans, sum);

    for (int idx = end; idx < N; idx++)
    {
        sum += Arr[idx];
        sum -= Arr[start];

        start++;
        ans = max(ans, sum);
    }

    return ans;
}