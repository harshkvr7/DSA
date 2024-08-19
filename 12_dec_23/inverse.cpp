#include <bits/stdc++.h>

using namespace std;

int inverse(int num)
{
    int inverse = 0;
    int idx = 1;

    while (num != 0)
    {
        int digit = num % 10;

        inverse += idx * pow(10, digit - 1);

        idx++;

        num = num / 10;
    }

    return inverse;
}

int main()
{
    int num;

    cin >> num;

    cout << inverse(num) << endl;

    return 0;
}