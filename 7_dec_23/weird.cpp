#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    while (num != 1)
    {
        if ((num % 2) == 0)
        {
            num = num / 2;
        }
        
        else
        {
            num = (num * 3) + 1;
        }

        cout << num << endl;
    }

    return 0;
}