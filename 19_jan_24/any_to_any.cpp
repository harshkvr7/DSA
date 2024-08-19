#include <bits/stdc++.h>

using namespace std;

//program to convert number of given base into another number of different base

int main ()
{
    string str;

    cin >> str;

    int base1,base2;

    cin >> base1;
    cin >> base2;

    int ans = 0;

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

        ans = ans + num * pow(base1, str.size() - idx - 1);
    }

    string str1_ans = "";

    while (ans != 0)
    {
        int chr;

        int remainder = ans % base2;

        if (remainder == 10)
        {
            chr = 'A';
        }
        else if (remainder == 11)
        {
            chr = 'B';
        }
        else if (remainder == 12)
        {
            chr = 'C';
        }
        else if (remainder == 13)
        {
            chr = 'D';
        }
        else if (remainder == 14)
        {
            chr = 'E';
        }
        else if (remainder == 15)
        {
            chr = 'F';
        }
        else
        {
            chr = remainder + 48;
        }

        str1_ans.push_back(chr);

        ans /= base2;
    }

    for (int idx = 0; idx < str1_ans.size() / 2; idx++)
    {
        char temp = str1_ans[idx];

        str1_ans[idx] = str1_ans[str1_ans.size() - idx - 1];

        str1_ans[str1_ans.size() - idx - 1] = temp;
    }
    
    cout << str1_ans;

    return 0;
}