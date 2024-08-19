#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    cin >> num;

    for (int fact = 2; fact <= num; fact++)
    {
        if (num % fact == 0)
        {
            cout << fact;

            num = num / fact;

            fact = 1;
        }

        if (num == 1)
        {
            break;
        }
    }

    cout << endl;

    return 0;
}