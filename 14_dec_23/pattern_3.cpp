#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    for (int idx0 = 1; idx0 <= rows; idx0++)
    {
        for (int idx = rows - idx0; idx > 0; idx--)
        {
            cout << "\t";
        }

        for (int idx2 = 1; idx2 <= idx0; idx2++)
        {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}