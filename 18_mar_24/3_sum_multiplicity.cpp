#include <bits/stdc++.h>
using namespace std;

int threeSumMulti(vector<int> &A, int target)
{
    // map to store the count of each integer
    unordered_map<int, long> cmap;

    for (int a : A)
    {
        cmap[a]++;
    }

    long res = 0;

    for (auto it : cmap)
        for (auto it2 : cmap)
        {
            int inum = it.first, jnum = it2.first, knum = target - inum - jnum;

            if (!cmap.count(knum))
            {
                continue;
            }
            if (inum == jnum && jnum == knum)
            {
                res += cmap[inum] * (cmap[inum] - 1) * (cmap[inum] - 2) / 6;   // Combination formula
            }
            else if (inum == jnum && jnum != knum)
            {
                res += cmap[inum] * (cmap[inum] - 1) / 2 * cmap[knum];  // Combination formula
            }
            else if (inum < jnum && jnum < knum)
            {
                res += cmap[inum] * cmap[jnum] * cmap[knum];  // Combination formula
            }
        }

    return res % int(1e9 + 7);
}