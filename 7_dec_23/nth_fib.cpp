#include <iostream>

using namespace std;

int main()
{
    int num, temp1, temp2, f3;

    cin >> num;

    temp1 = 0;
    temp2 = 1;

    if (num == 1)
    {
        cout << 0 << endl;
    }

    if (num == 2)
    {
        cout << 1 << endl;
    }

    for (int idx = 2; idx <= num; idx++)
    {
        if (idx == 1 || idx == 2)
        {
            continue;
        }

        f3 = temp1 + temp2;
        temp1 = temp2;
        temp2 = f3;
    }

    if (num > 2)
    {
        cout << f3 << endl;
    }

    return 0;
}