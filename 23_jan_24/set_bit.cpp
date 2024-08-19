#include <bits/stdc++.h>
 
using namespace std;

//to set the bit at a given position we first left shift 1 by the pos and then use the or operator with the given number

int setBit(int num, int pos)
{
    return ((1 << pos) | num);
}

int main()
{
    int num , pos;

    cin >> num;
    cin >> pos;

    cout << setBit(num, pos);

    return 0;
} 