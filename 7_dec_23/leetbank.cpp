#include <iostream>

using namespace std;

int sum_n(int first, int num, int diff)
{
    return (num * (2 * first + (num - 1) * diff)) / 2;
}

int totalMoney(int n_days)
{

    int weeksum = 0, daysum = 0;
    int week = n_days / 7;
    int days = n_days % 7;

    if (week > 0)
    {
        weeksum = sum_n(28, week, 7);
    }
    
    if (days > 0)
    {
        daysum = sum_n(week + 1, days, 1);
    }

    return daysum + weeksum;
}

int main()
{
    int num;

    cin >> num;

    cout << (totalMoney(num)) << endl;

    return 0;
}