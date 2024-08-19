#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    for (int idx = 1; idx <= rows; idx++)
    {
        for (int idx2 = 1; idx2 <= idx; idx2++)
        {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}