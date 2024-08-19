#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    int left = n - 1;
    int right = 0;

    while (left >= 0 && right < m)
    {
        // if the largest number in the first array is larger than the smallest number present in second array they are swapped
        if (arr2[right] < arr1[left])
        {
            swap(arr2[right], arr1[left]);

            right++;
            left--;
        }
        else
        {
            break;
        }
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}