#include <bits/stdc++.h>

using namespace std;

int bulb_switcher(int num) // approach 1 
{
    vector<int> BulbArr;   // time complexity - O(N*log(N))
                           // space complexity - O(N)
    if (num == 0)
    {
        return 0;
    }

    for (int idx = 0; idx < num; idx++)
    {
        BulbArr.push_back(0);
    }

    for (int round = 1; round <= num; round++)
    {
        for (int index = round - 1; index < num; index += round)
        {
            BulbArr[index] = 1 - BulbArr[index];
        }
    }

    int count = 0;

    for (int idx = 0; idx < num; idx++)
    {
        if (BulbArr[idx] == 1)
        {
            count++;
        }
    }

    return count;
}

int Bulb_switcher2(int num) // approach 2 , obtained using observation
{
    return sqrt(num); // time complexity - O(1) , space complexity - O(1) 
}

int main()
{
    int num;

    cin >> num;

    cout << "Number of bulbs glowing : " << bulb_switcher(num);

    cout << "Number of bulbs glowing using sqrt : " << bulb_switcher(num);

    return 0;
}