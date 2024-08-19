#include <bits/stdc++.h>
using namespace std;

void setPerm(vector<int> &vec, string &ans, int n, int k, vector<int> &factVal)
{
    if (n == 1)
    {
        ans += to_string(vec.back());
        return;
    }

    int index = (k / factVal[n - 1]);

    if (k % factVal[n - 1] == 0)
    {
        index--;
    }

    ans += to_string(vec[index]);

    vec.erase(vec.begin() + index);

    k -= factVal[n - 1] * index;

    setPerm(vec, ans, n - 1, k, factVal);
}

string getPermutation(int n, int k)
{
    if (n == 1)
    {
        return "1";
    }
        
    vector<int> factVal = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    string ans = "";
    vector<int> vec;

    for (int i = 1; i <= n; i++)
    {
        vec.emplace_back(i);
    }

    setPerm(vec, ans, n, k, factVal);

    return ans;
}