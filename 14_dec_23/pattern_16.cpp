#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int spaces = (2 * rows) - 3;

    for (int idx0 = 1; idx0 <= rows; idx0++)
    {
        for (int idx1 = 1; idx1 <= idx0; idx1++)
        {
            cout << idx1 << " ";
        }

        for (int idx2 = spaces; idx2 > 0; idx2--)
        {
            cout << "  ";
        }

        spaces -= 2;

        for (int idx3 = idx0; idx3 > 0; idx3--)
        {
            if (idx3 == rows)
            {
                continue;
            }

            cout << idx3 << " ";
        }

        cout << endl;
    }

    return 0;
}