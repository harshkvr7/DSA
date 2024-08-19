#include <bits/stdc++.h>

using namespace std;

//to check whether a specified bit a position pos is set , we first left shift 1 by (k-1) digits and then we perform bitwise and operation .
//if the specified git is set it returns some number else it returns 0.

void isBitSet(int num, int pos)
{
	if (num & (1 << pos))
		cout << "SET";
	else
		cout << "NOT SET";
}

int main()
{
	int num, pos;

    cin >> num;
    cin >> pos;

	isBitSet(num, pos);

	return 0;
}
