#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < rows; y++)
        {
            if (x + y == rows-1 || x == y)
            {
                cout << "* ";
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