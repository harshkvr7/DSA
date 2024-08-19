#include <iostream>

using namespace std;

//to toggle the bit at given pos , first we will left shift 1 by (pos-1)
//then we will perform xor operation with the given number
//because all other values are zero xor operation with the respective digits of given number will
//return the same number except at the position and the opposite will happen at the position 
//containg the 1

int toggleKthBit(int num, int pos)
{
    return (num ^ (1 << (pos - 1)));
}

int main()
{
    int num, pos;
    
    cin >> num;
    cin >> pos;

    cout << toggleKthBit(num, pos);

    return 0;
}
