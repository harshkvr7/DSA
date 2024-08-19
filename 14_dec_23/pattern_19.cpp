#include <bits/stdc++.h>

using namespace std;

int main()
{

    int rows;

    cin >> rows;

    for (int idx0 = 0; idx0 < rows; idx0++)
    {
        if (idx0 < rows / 2)
        {
            if (idx0 == 0)
            {
                for (int idx1 = 0; idx1 < rows / 2; idx1++)
                {
                    cout << "* ";
                }

                cout << "* ";

                for (int idx2 = 0; idx2 < rows / 2 - 1; idx2++)
                {
                    cout << "  ";
                }

                cout << "*";

                cout << endl;

                continue;
            }

            for (int idx3 = 0; idx3 < rows / 2; idx3++)
            {
                cout << "  ";
            }

            cout << "* ";

            for (int idx4 = 0; idx4 < rows / 2 - 1; idx4++)
            {
                cout << "  ";
            }

            cout << "*";

            cout << endl;
        }
        else if (idx0 == rows / 2)
        {
            for (int idx1 = 0; idx1 < rows; idx1++)
            {
                cout << "* ";
            }

            cout << endl;
        }
        else
        {
            cout << "* ";

            for (int idx4 = 0; idx4 < rows / 2 - 1; idx4++)
            {
                cout << "  ";
            }

            cout << "* ";

            if (idx0 == rows - 1)
            {
                for (int idx1 = 0; idx1 < rows / 2; idx1++)
                {
                    cout << "* ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}