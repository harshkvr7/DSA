#include <iostream>

using namespace std;

int FindLcm(int num1, int num2)
{
    int idx;

    for (idx = min(num1, num2); idx < num2 * num1; idx += min(num1, num2))
    {
        if (idx % num1 == 0 && idx % num2 == 0)
        {
            return idx;
        }
    }

    return idx;
}

int FindGcd(int num1, int num2)
{
    int idx;

    for (int idx = min(num1, num2); idx > 0; idx--)
    {
        if (num1 % idx == 0 && num2 % idx == 0)
        {
            return idx;
        }
    }

    return idx;
}

int main()
{
    int num1, num2;

    cin >> num1;

    cin >> num2;

    cout << "LCM is : " << FindLcm(num1, num2) << endl;
    cout << "GCD is : " << FindGcd(num1, num2) << endl;

    return 0;
}