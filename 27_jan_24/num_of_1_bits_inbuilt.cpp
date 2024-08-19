#include <iostream>

using namespace std;

// we can directly count set bits using __builtin_popcount().

int main()
{
    int num;

    cin >> num;

    cout << __builtin_popcount(num) << endl;

    return 0;
}