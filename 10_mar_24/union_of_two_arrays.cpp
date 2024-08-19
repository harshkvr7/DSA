#include <bits/stdc++.h>
using namespace std;

//      ***USING SET DATA STRUCTURE***
int doUnion(int a[], int n, int b[], int m)
{
    unordered_set<int> setting;

    for (int idx = 0; idx < n; idx++)
    {
        setting.insert(a[idx]);
    }

    for (int idx = 0; idx < m; idx++)
    {
        setting.insert(b[idx]);
    }

    return setting.size();
}