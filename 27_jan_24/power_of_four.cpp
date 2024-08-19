#include <bits/stdc++.h>

using namespace std;

//the n > 0 condition checks if the num is more than 0.
//the n & (n-1) condition checks if the number is a power of two
//the n & 0x55555555 condition checks if the set bit is at an odd position because the powers of fours occur at odd positions in a binary num 

bool isPowerOfFour(int num)
{
    return num > 0 && (num & (num - 1)) == 0 && (num & 0x55555555) != 0;
}

int main()
{
    int num;

    cin >> num;

    cout << isPowerOfFour(num) << endl;

    return 0;
}