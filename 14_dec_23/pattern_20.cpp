#include <bits/stdc++.h>

using namespace std;

int main()
{

    int rows;

    cin >> rows;

    int space = rows / 2 - 1;

    int space2 = 1;

    for (int idx0 = 0; idx0 < rows; idx0++)
    {
        if (idx0 < rows / 2)
        {
            cout << "* ";

            for (int idx1 = 0; idx1 <= (rows / 2 - 1) * 2; idx1++)
            {
                cout << "  ";
            }

            cout << "*";
        }
        else if (idx0 < rows - 1)
        {
            if (idx0 == rows / 2)
            {
                cout << "* ";

                for (int idx1 = 0; idx1 < space; idx1++)
                {
                    cout << "  ";
                }

                cout << "* ";

                for (int idx1 = 0; idx1 < space; idx1++)
                {
                    cout << "  ";
                }

                cout << "* ";

                cout << endl;

                continue;
            }

            space -= 1;

            cout << "* ";

            for (int idx1 = 0; idx1 < space; idx1++)
            {
                cout << "  ";
            }

            cout << "* ";

            for (int idx2 = 0; idx2 < space2; idx2++)
            {
                cout << "  ";
            }

            cout << "* ";

            for (int idx1 = 0; idx1 < space; idx1++)
            {
                cout << "  ";
            }

            space2 += 2;

            cout << "*";
        }
        else
        {
            cout << "* ";

            for (int idx1 = 0; idx1 <= (rows / 2 - 1) * 2; idx1++)
            {
                cout << "  ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}