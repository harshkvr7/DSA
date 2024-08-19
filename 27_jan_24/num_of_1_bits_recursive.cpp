#include <bits/stdc++.h>

using namespace std;

// this method is the second approach of kernighan's algorithm where we use recursion instead of a while loop.

int countSetBits(int num)
{
    if (num == 0)
        return 0;
    else
        return 1 + countSetBits(num & (num - 1));
}

int main()
{
    int num;

    cin >> num;

    cout << countSetBits(num);

    return 0;
}