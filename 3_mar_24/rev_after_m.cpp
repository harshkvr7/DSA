#include <bits/stdc++.h>

using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int len = arr.size();

    vector<int> arr2(len, 0);

    int indx = 0;

    for (int idx = 0; idx <= m; idx++)
    {
        arr2[indx++] = arr[idx];
    }

    for (int jdx = len - 1; jdx > m; jdx--)
    {
        arr2[indx++] = arr[jdx];
    }

    for (int idx = 0; idx < len; idx++)
    {
        arr[idx] = arr2[idx];
    }
}
