#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    for (int x = 0; x < rows; x++)
    {
        for (int y = 1; y <= rows; y++)
        {
            if (x + y == rows)
            {
                cout << "*";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}