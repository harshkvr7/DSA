#include <bits/stdc++.h>
using namespace std;

int counts(int arr[], int pages, int len)
{
    int students = 1;

    int stupages = 0;

    for (int idx = 0; idx < len; idx++)
    {
        if (stupages + arr[idx] <= pages)
        {
            stupages += arr[idx];
        }
        else
        {
            students++;
            stupages = arr[idx];
        }
    }

    return students;
}

int findPages(int A[], int N, int M)
{
    if (M > N)
    {
        return -1;
    }

    int low = INT_MIN;
    int high = 0;

    for (int idx = 0; idx < N; idx++)
    {
        int num = A[idx];

        low = max(low, num);
        high += num;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int students = counts(A, mid, N);

        if (students > M)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}