#include <bits/stdc++.h>

using namespace std;

//   1d array in stack memory

int main()
{
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    for (int idx = 0 ; idx < 10 ; idx++)
    {
        cout << *(arr2 + idx) <<endl;
    }

    return 0;
}