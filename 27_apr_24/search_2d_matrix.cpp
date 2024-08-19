#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    //             ***BINARY SEARCH***

    int rows = matrix.size();
    int cols = matrix[0].size();
    int low = 0, high = rows * cols - 1;

    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int t = matrix[mid / cols][mid % cols];
        
        if (t == target)
            return 1;
        else if (t < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;

    //       ****BRUTE****
    // int m = matrix.size();
    // int n = matrix[0].size();
    // bool flag = true;
    // bool ans = 0;
    // int id = 0;
    // for(int idx = 0; idx < m; idx++)
    // {
    //     if(matrix[idx][0] <= target && target <= matrix[idx][n - 1])
    //     {
    //         id = idx;
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag)
    // {
    //     return false;
    // }

    // for(int idx = 0; idx < n; idx++)
    // {
    //     if(matrix[id][idx] == target)
    //     {
    //         return true;
    //     }
    // }

    // return false;
}