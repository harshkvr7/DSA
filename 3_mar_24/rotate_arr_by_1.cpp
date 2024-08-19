#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int num)
{
    int last = arr[num - 1];

    for (int idx = num; idx > 0; idx--)
    {
        arr[idx] = arr[idx - 1];
    }

    arr[0] = last;
}
