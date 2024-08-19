#include <bits/stdc++.h>

using namespace std;

//program to convert number of given base into a decimal number

int main()
{
    string str;

    cin >> str;

    int base;

    cin >> base;

    int ans_dec = 0;

    for (int idx = str.length() - 1; idx >= 0; idx--)
    {
        int num;
        if (str[idx] == 'A')
        {
            num = 10;
        }
        else if (str[idx] == 'B')
        {
            num = 11;
        }
        else if (str[idx] == 'C')
        {
            num = 12;
        }
        else if (str[idx] == 'D')
        {
            num = 13;
        }
        else if (str[idx] == 'E')
        {
            num = 14;
        }
        else if (str[idx] == 'F')
        {
            num = 15;
        }
        else
        {
            num = str[idx] - 48;
        }

        ans_dec = ans_dec + num * pow(base, str.size() - idx - 1);
    }
    
    cout << ans_dec;

    return 0;
}