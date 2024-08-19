#include <bits/stdc++.h>
using namespace std;

//     ****BRUTE****

// bool isseg(int arr[], int n)
// {
//     for (int idx = 0; idx < n - 1; idx++)
//     {
//         if (arr[idx] < 0 && arr[idx + 1] >= 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void segregateElements(int arr[], int n)
// {
//     while (!isseg(arr, n))
//     {
//         for (int idx = 0; idx < n - 1; idx++)
//         {
//             if (arr[idx] < 0 && arr[idx + 1] >= 0)
//             {
//                 swap(arr[idx], arr[idx + 1]);
//             }
//         }
//         for (int idx = n - 1; idx > 0; idx--)
//         {
//             if (arr[idx] >= 0 && arr[idx - 1] < 0)
//             {
//                 swap(arr[idx], arr[idx - 1]);
//             }
//         }
//     }
// }

//     ****OPTIMISED****
void segregateElements(int arr[], int n)
{
    vector<int> ans;

    for (int idx = 0; idx < n; idx++)
    {
        if (arr[idx] >= 0)
        {
            ans.push_back(arr[idx]);
        }
    }

    for (int idx = 0; idx < n; idx++)
    {
        if (arr[idx] < 0)
        {
            ans.push_back(arr[idx]);
        }
    }

    for (int idx = 0; idx < n; idx++)
    {
        arr[idx] = ans[idx];
    }
}