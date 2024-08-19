#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int space = 1;
    int space2 = rows - 4;

    for (int idx = 0; idx < rows; idx++)
    {
        if (idx <= rows / 2)
        {
            for (int idx2 = 0; idx2 < rows / 2 - idx; idx2++)
            {
                cout << " ";
            }

            cout << "*";

            if (idx > 0)
            {
                for (int idx3 = 0; idx3 < space; idx3++)
                {
                    cout << " ";
                }

                space += 2;
            }

            if (idx > 0)
            {
                cout << "*";
            }

            cout << endl;
        }
        else
        {
            for (int idx2 = idx - rows / 2; idx2 > 0; idx2--)
            {
                cout << " ";
            }

            cout << "*";

            for (int idx3 = 0; idx3 < space2; idx3++)
            {
                cout << " ";
            }

            space2 -= 2;

            if (idx < rows - 1)
            {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}