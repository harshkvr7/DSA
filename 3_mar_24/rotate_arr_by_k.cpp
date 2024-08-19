#include <bits/stdc++.h>

using namespace std;

void reversearr(vector<int> &vec, int idx1, int idx2)
{
    for (int idx = idx1; idx <= (idx2 + idx1) / 2; idx++)
    {
        swap(vec[idx], vec[idx2 + idx1 - idx]);
    }
}

void rotate(vector<int> &nums, int k)
{
    k = k % nums.size();

    reversearr(nums, 0, nums.size() - 1);
    reversearr(nums, 0, k - 1);
    reversearr(nums, k, nums.size() - 1);
}