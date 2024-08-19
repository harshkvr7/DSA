#include <bits/stdc++.h>
using namespace std;

//function to find days required for given capacity
int dayscalc(vector<int> weights, int capacity)
{
    int days = 1;
    int currentload = 0;

    for (int weight : weights)
    {
        if (currentload + weight > capacity)
        {
            days++;
            currentload = weight;
        }
        else
        {
            currentload += weight;
        }
    }

    return days;
}

int sum(vector<int> weights)
{
    int sum = 0;

    for (int idx = 0; idx < weights.size(); idx++)
    {
        sum += weights[idx];
    }

    return sum;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int left = *max_element(weights.begin(), weights.end());
    int right = sum(weights);

    // binary search to find optimal capacity
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int requiredDays = dayscalc(weights, mid);

        if (requiredDays > days)
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