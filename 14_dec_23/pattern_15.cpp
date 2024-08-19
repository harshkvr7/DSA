#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int stars = 1;
    int stars2 = rows - 2;

    for (int idx = 0; idx < rows; idx++)
    {
        if (idx <= rows / 2)
        {
            for (int idx2 = rows / 2 - idx; idx2 > 0; idx2--)
            {
                cout << "\t";
            }

            for (int idx3 = 0; idx3 < stars; idx3++)
            {
                if (idx3 > idx)
                {
                    cout << stars + idx - idx3 << "\t";
                }
                else
                {
                    cout << stars - idx + idx3 << "\t";
                }
            }

            cout << endl;

            stars += 2;
        }
        else
        {
            for (int idx2 = 1; idx2 < idx - rows / 2 + 1; idx2++)
            {
                cout << "\t";
            }

            for (int idx3 = 0; idx3 < stars2; idx3++)
            {
                if (idx3 > (rows - idx - 1))
                {
                    cout << stars2 + (rows - idx) - idx3 - 1 << "\t";
                }
                else
                {
                    cout << stars2 - (rows - idx) + 1 + idx3 << "\t";
                }
            }

            stars2 -= 2;

            cout << endl;
        }
    }

    return 0;
}