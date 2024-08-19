#include <bits/stdc++.h>

using namespace std;

int factorial(int num)
{
    int ans = num;

    if (num == 0)
    {
        return 1;
    }

    for (int idx = ans - 1; idx > 1; idx--)
    {
        ans = ans * idx;
    }

    return ans;
}

int main()
{
    int rows;

    cin >> rows;

    for (int n = 0; n < rows; n++)      // n = number of things
    {
        for (int r = 0; r <= n; r++)    // r = number of things being picked
        {
            cout << factorial(n) / (factorial(r) * factorial(n - r)) << "\t";
        }

        cout << endl;
    }

    return 0;
}