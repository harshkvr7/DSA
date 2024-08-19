#include <bits/stdc++.h>

using namespace std;

//to check number of 1 bits we first check the value at first digit of the given number using the scheck_bit logic .
//then we keep left shifting the set digit using for loop until the size of int in bits is reached.

int hammingWeight(uint32_t num)
{
    int count = 0;

    for (int idx = 0; idx < 32; idx++)
    {
        if (num & (1 << idx))
            count++;
    }

    return count;
}

int main()
{
    uint32_t num;

    cin >> num;

    cout << hammingWeight(num);

    return 0;
}