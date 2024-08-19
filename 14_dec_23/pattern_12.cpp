#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int a = 0, b = 1, c = 0;

    for (int idx = 1; idx <= rows; idx++)
    {
        if (idx == 2)
        {
            a = 0;
        }
        
        for (int idx2 = 0; idx2 < idx; idx2++)
        {
            cout << c << " ";

            c = a + b;
            a = b;
            b = c;
        }

        cout << endl;
    }

    return 0;
}