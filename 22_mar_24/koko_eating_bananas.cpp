#include <bits/stdc++.h>
using namespace std;

// function to calculate total time
long long timecalc(vector<int> &piles, int k)
{
    long long timetaken = 0;

    for (int pile : piles)
    {
        timetaken += (pile + k - 1) / k; // ceil(pile / k)
    }

    return timetaken;
}

int minEatingSpeed(vector<int> &piles, int h)
{
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    // finding the optimal speed using binary search
    while (left <= right)
    {
        int mid = (right + left) / 2;

        long long timetaken = timecalc(piles, mid);

        if (timetaken > h)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return left;
}