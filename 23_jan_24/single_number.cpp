#include <bits/stdc++.h>

using namespace std;

//to solve this question , first we declare a variable holding zero as the value,
//then we repeatedly perform xor operation between the elements of the list and the initialized variable
//because of the associative property of xor operator , the same values will cancel out (xor operation between same values return zero),
//and only the single number will be left behinf

int singleNumber(vector<int> &nums)
{
    int ans = 0;

    for (auto element : nums)
    {
        ans ^= element;
    }

    return ans;
}

int main()
{
    vector<int> nums;

    int len, element;

    cin >> len;

    for (int idx = 0; idx < len; idx++)
    {
        cin >> element;

        nums.push_back(element);
    }

    cout << singleNumber(nums);

    return 0;
}