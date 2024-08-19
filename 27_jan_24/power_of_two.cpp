#include <bits/stdc++.h>

using namespace std;

//as n-1 return a number with all the bits toggled on and after the rightmost set bit
//bitwise  & between n and n-1 will return 0 if no other 1 bits are present in n.

bool isPowerOfTwo(int num)
{
    if (num == 0 || num == INT_MIN)
    {
        return false;
    }
    if (num & (num - 1))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(){
    int num;

    cin >> num;

    cout << isPowerOfTwo(num);

    return 0;
}