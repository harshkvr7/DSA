#include <bits/stdc++.h>
using namespace std;

class NumMatrix
{
public:
    int rows, cols;
    vector<vector<int>> sums;

    NumMatrix(vector<vector<int>> &matrix)
    {
        if (matrix.empty() || matrix[0].empty())
        {
            rows = 0;
            cols = 0;
            return;
        }

        rows = matrix.size();
        cols = matrix[0].size();

        // Initialize sums with the same size as matrix and copy values
        sums = vector<vector<int>>(rows, vector<int>(cols, 0));

        // Compute row-wise prefix sums
        for (int row = 0; row < rows; row++)
        {
            int sum = 0;

            for (int col = 0; col < cols; col++)
            {
                sum += matrix[row][col];
                sums[row][col] = sum;
            }
        }

        // Compute column-wise prefix sums
        for (int col = 0; col < cols; col++)
        {
            int sum = 0;

            for (int row = 0; row < rows; row++)
            {
                sum += sums[row][col];
                sums[row][col] = sum;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int sub = 0;

        if (row1 != 0 && col1 != 0)
        {
            sub -= sums[row1 - 1][col1 - 1];
        }
        if (row1 != 0)
        {
            sub += sums[row1 - 1][col2];
        }
        if (col1 != 0)
        {
            sub += sums[row2][col1 - 1];
        }

        return sums[row2][col2] - sub;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */