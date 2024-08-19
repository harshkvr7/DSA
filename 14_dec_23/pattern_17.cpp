#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int stars1 = 1;
    int stars2 = rows / 2;

    for (int idx0 = 0; idx0 < rows; idx0++)
    {
        if (idx0 <= rows / 2)
        {
            for (int idx1 = 0; idx1 < rows / 2; idx1++)
            {
                if (idx0 == rows / 2)
                {
                    continue;
                }

                cout << "  ";
            }

            if (idx0 == rows / 2)
            {
                for (int idx3 = 0; idx3 < rows / 2; idx3++)
                {
                    cout << "* ";
                }
            }

            for (int idx2 = 0; idx2 < stars1; idx2++)
            {
                cout << "* ";
            }

            stars1++;

            cout << endl;
        }
        else
        {
            for (int idx1 = 0; idx1 < rows / 2; idx1++)
            {
                cout << "  ";
            }

            for (int idx2 = 0; idx2 < stars2; idx2++)
            {
                cout << "* ";
            }

            stars2--;

            cout << endl;
        }
    }

    return 0;
}