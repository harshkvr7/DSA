#include <bits/stdc++.h>

using namespace std;

//   2d stack in heap (row-major order)

int main()
{
    // Dimensions of the array
    int rows = 3, col = 4;

    int ele = 0;

    // Declare a memory block of
    // size rows*col
    int *arr = new int[rows * col];

    for (int idx = 0; idx < rows; idx++)
    {
        for (int jdx = 0; jdx < col; jdx++)
        {
            *(arr + idx * col + jdx) = ++ele;
        }
    }

    for (int idx = 0; idx < rows; idx++)
    {
        for (int jdx = 0; jdx < col; jdx++)
        {
            cout << *(arr + idx * col + jdx) << " ";
        }

        cout << endl;
    }

    delete[] arr;

    return 0;
}