#include <iostream>

using namespace std;

//   2d stack in heap (array of pointers)

int main()
{
    // Dimensions of the array
    int row = 3, col = 4;

    int ele = 0;

    // Declare memory block of size row
    int **a = new int *[row];

    for (int idx = 0; idx < row; idx++)
    {
        // Declare a memory block of size col
        a[idx] = new int[col];
    }

    for (int idx = 0; idx < row; idx++)
    {
        for (int jdx = 0; jdx < col; jdx++)
        {
            a[idx][jdx] = ++ele;
        }
    }

    for (int idx = 0; idx < row; idx++)
    {
        for (int jdx = 0; jdx < col; jdx++)
        {
            cout << a[idx][jdx] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int idx = 0; idx < row; idx++)
    {
        delete[] a[idx]; // To delete the inner arrays
    } 
      
    delete[] a;

    return 0;
}
