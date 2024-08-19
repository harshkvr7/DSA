#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int> &A, int K)
{
    int zero = 0, left = 0;
    int ans = 0;

    for (int idx = 0; idx < A.size(); ++idx)
    {
        if (A[idx] == 0)
        {
            zero++;
        }

        while (zero > K)
        {
            if (A[left] == 0)
            {
                --zero;
            }
                
            ++left;
        }

        ans = max(ans, idx - left + 1);
    }

    return ans;
}