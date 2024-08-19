#include <iostream>

using namespace std;

int main()
{
    int num, temp1 = 0, temp2 = 1, temp3;

    cin >> num;

    for (int idx = 1; idx <= num; idx++)
    {
        if (idx == 1)
        {
            cout << 0 << endl;

            continue;
        }
        
        if (idx == 2)
        {
            cout << 1 << endl;
            
            continue;
        }

        temp3 = temp1 + temp2;

        cout << temp3 << endl;

        temp1 = temp2;
        temp2 = temp3;
    }

    return 0;
}