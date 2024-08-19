#include <bits/stdc++.h>
using namespace std;

int countTriplets(vector<int> &A)
{
    A.insert(A.begin(), 0);
    
    int n = A.size(), res = 0;

    for (int idx = 1; idx < n; ++idx)
    {
        A[idx] ^= A[idx - 1];
    }

    unordered_map<int, int> count, total;

    for (int idx = 0; idx < n; ++idx)
    {
        res += count[A[idx]]++ * (idx - 1) - total[A[idx]];
        total[A[idx]] += idx;
    }

    return res;
}

// class Solution {
// public:
//     int countTriplets(vector<int>& arr) {
//         int len = arr.size();
//         int ans = 0;

//         for(int idx = 0; idx < len - 1; idx++)
//         {
//             for(int jdx = idx + 1; jdx < len; jdx++)
//             {
//                 int xorsum1 = 0;

//                 int i = idx;
//                 while(i < jdx)
//                 {
//                     xorsum1 ^= arr[i++];
//                 }

//                 int xorsum2 = 0;

//                 int j = jdx;
//                 while(j < len)
//                 {
//                     xorsum2 ^= arr[j++];

//                     if(xorsum1 == xorsum2)
//                     {
//                         ans++;
//                     }
//                 }
//             }
//         }

//         return ans;
//     }
// };