#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    int largest = 0;
    int second = 0;

    for (int idx = 0; idx < n; idx++)
    {
        if (arr[idx] > largest)
        {
            second = largest;

            largest = arr[idx];
        }
        if (arr[idx] > second && arr[idx] < largest)
        {
            second = arr[idx];
        }
    }

    if (second == 0)
    {
        return -1;
    }

    if (second == largest)
    {
        return -1;
    }

    return second;
}
