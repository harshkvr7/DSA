#include <bits/stdc++.h>

using namespace std;

// decleare rev
// check 32 bit range if rev is outside the range then return 0
// find remainder and add its to r
// Update the value of x
// if r in the 32 bit range then return r

int reverse(int xnum)
{
    int rev = 0;

    while (xnum)
    {
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;

        rev = rev * 10 + xnum % 10;

        xnum = xnum / 10;
    }
    
    return rev;
}

int main()
{
    int num;

    cin >> num;

    cout << reverse(num);

    return 0;
}
