#include <bits/stdc++.h>
using namespace std;

void swapg(long long *arr1, long long *arr2, int left, int right)
{
    if (arr1[left] > arr2[right])
    {
        swap(arr1[left], arr2[right]);
    }
}

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;

        while (right < len)
        {
            if (left < n && right < n)
            {
                swapg(arr1, arr1, left, right);
            }
            else if (left < n && right >= n)
            {
                swapg(arr1, arr2, left, right - n);
            }
            else
            {
                swapg(arr2, arr2, left - n, right - n);
            }

            right++;
            left++;
        }

        if (gap == 1)
            gap = 0;

        gap = (gap / 2) + (gap % 2);
    }
}