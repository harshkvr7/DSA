#include <bits/stdc++.h>
using namespace std;

//program to convert a decimal number into a number of given base

int main()
{
    int number;

    cin >> number;

    int base;

    cin >> base;

    string ans_str = "";

    while (number != 0)
    {
        int rem = number % base;
        int cha;

        if (rem == 10)
        {
            cha = 'A';
        }
        else if (rem == 11)
        {
            cha = 'B';
        }
        else if (rem == 12)
        {
            cha = 'C';
        }
        else if (rem == 13)
        {
            cha = 'D';
        }
        else if (rem == 14)
        {
            cha = 'E';
        }
        else if (rem == 15)
        {
            cha = 'F';
        }
        else
        {
            cha = rem + 48;
        }

        ans_str.push_back(cha);

        number /= base;
    }

    for (int idx = 0; idx < ans_str.size() / 2; idx++)
    {
        char temp = ans_str[idx];

        ans_str[idx] = ans_str[ans_str.size() - idx - 1];
        
        ans_str[ans_str.size() - idx - 1] = temp;
    }

    cout << ans_str;

    return 0;
}