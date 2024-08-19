#include <bits/stdc++.h>

using namespace std;

int gcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;

        num2 = num1 % num2;

        num1 = temp;
    }

    return num1;
}

int main()
{

    int num1, num2, lcm, hcf;

    cin >> num1;
    cin >> num2;

    hcf = gcd(num1, num2);

    lcm = (num1 * num2) / hcf;

    cout << "GCD is : " << hcf << endl;
    cout << "LCM is : " << lcm << endl;

    return 0;
}