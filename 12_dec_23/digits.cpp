#include <bits/stdc++.h>

using namespace std;

int method1(int number)
{
    int digits = 0;

    if (number == 0)
    {
        return 1;
    }

    while (number != 0)
    {
        number = number / 10;

        digits++;
    }

    return digits;
}

int method2(int number)
{
    if (number == 0)
    {
        return 1;
    }

    return log10(abs(number)) + 1;
}

int main()
{
    int number;

    cin >> number;

    cout << "output using method 1 : " << method1(number) << endl;
    cout << "output using method 2 : " << method2(number) << endl;

    return 0;
}