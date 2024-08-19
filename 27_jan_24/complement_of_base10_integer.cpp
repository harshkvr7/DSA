#include <iostream>

using namespace std;

//first we will iniatialize a variable containing 1 , then we will left shift that one and add one until the length is equal to the length of num
//then we will use xor operator to toggle all the digits of num

int bitwiseComplement(int Num)
{
    int mask = 1;

    while (mask < Num)
        mask = (mask << 1) + 1;

    return mask ^ Num;
}

int main()
{
    int num;

    cin >> num;

    cout << bitwiseComplement(num);

    return 0;
}
