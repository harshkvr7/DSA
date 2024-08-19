#include <bits/stdc++.h>

using namespace std;

int num_rev(int number)
{
    int rev_num = 0;

    while (number > 0)
    {
        rev_num = rev_num * 10 + number % 10;
        
        number = number / 10;
    }

    return rev_num;
}

int main()
{
    int number;

    cin >> number;

    cout << "reversed number : " << num_rev(number) << endl;

    return 0;
}