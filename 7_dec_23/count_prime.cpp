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
    int num, count = 0;

    cin >> num;

    for (int idx = 2; idx <= num; idx++)
    {
        if (isprime(idx))
        {
            count += 1;
        }
    }

    cout << "prime count : " << count << endl;

    return 0;
}