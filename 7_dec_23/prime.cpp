#include <iostream>
#include <cmath>

using namespace std;

int isprime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }

    for (int idx = 2; idx <= sqrt(num); idx++)
    {
        if ((num % idx) == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cin >> n;

    if (isprime(n))
    {
        cout << "prime number";
    }
    
    else
    {
        cout << "not a prime number.";
    }

    return 0;
}