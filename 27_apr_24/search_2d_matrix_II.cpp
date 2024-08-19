#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int m = matrix.size();
    int n = matrix[0].size();
    int row = 0;
    int col = n - 1;

    while (row < m && col >= 0)
    {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }

    return false;
}
//        Nlog(N) solution
// class Solution {
// public:
//     bool containes_num(vector<int>& row, int target)
//     {
//         int left = 0;
//         int right =row.size() - 1;

//         while(left <= right)
//         {
//             int mid = left + (right - left) / 2;

//             if(row[mid] == target)
//             {
//                 return true;
//             }
//             else if(row[mid] > target)
//             {
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }

//         return false;
//     }

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int row = 0; row < matrix.size(); row++)
//         {
//             if(containes_num(matrix[row], target))
//             {
//                 return true;
//             }
//         }

//         return false;
//     }
// };