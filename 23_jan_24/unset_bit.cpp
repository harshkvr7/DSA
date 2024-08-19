#include <bits/stdc++.h>
using namespace std;

//to unset a bit at the given position we first left shift 1 by (pos-1).
//then we perform not operation on digit made so that all other bits are 1 except on the position of 1
//then we perform and opertaion with the given number to unset the bit

int unsetBit(int num, int pos)
{
    return (num & (~(1 << (pos - 1))));
}

int main()
{
    int num, pos;
    
    cin >> num;
    cin >> pos;

    cout << unsetBit(num, pos) << endl;

    return 0;
}
