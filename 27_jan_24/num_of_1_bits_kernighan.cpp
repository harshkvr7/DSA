#include <bits/stdc++.h>

using namespace std;

//Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit. 
//So if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit.
//If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 

unsigned int countSetBits(int num)
{
    unsigned int count = 0;

    while (num)
    {
        num &= (num - 1);

        count++;
    }

    return count;
}

int main()
{
    int num;

    cin >> num;

    cout << countSetBits(num);

    return 0;
}