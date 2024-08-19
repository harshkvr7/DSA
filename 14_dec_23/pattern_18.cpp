#include <bits/stdc++.h>

using namespace std;

int main()
{

    int rows;

    cin >> rows;

    int space1 = rows - 4;

    int space2 = rows / 2 - 1;

    int stars = 3;

    for (int idx0 = 0; idx0 < rows; idx0++)
    {
        if (idx0 <= rows / 2)
        {
            if (idx0 == 0)
            {
                for (int idx1 = 0; idx1 < rows; idx1++)
                {
                    cout << "* ";
                }

                cout << endl;

                continue;
            }

            for (int idx2 = 0; idx2 < idx0; idx2++)
            {
                cout << "  ";
            }

            cout << "* ";

            for (int idx3 = 0; idx3 < space1; idx3++)
            {
                cout << "  ";
            }

            space1 -= 2;

            if (idx0 == rows / 2)
            {
                cout << endl;

                continue;
            }
            else
            {
                cout << "*";
            }

            cout << endl;
        }
        else
        {
            for (int idx1 = 0; idx1 < space2; idx1++)
            {
                cout << "  ";
            }

            space2 -= 1;

            for (int idx2 = 0; idx2 < stars; idx2++)
            {
                cout << "* ";
            }

            stars += 2;

            cout << endl;
        }
    }

    return 0;
}