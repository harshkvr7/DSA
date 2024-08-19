#include <bits/stdc++.h>
using namespace std;

int search(string pat, string txt)
{
    unordered_map<char, int> og;
    unordered_map<char, int> curr;

    int len = pat.size(), n = txt.size();

    for (auto ch : pat)
    {
        og[ch]++;
    }

    int start = 0, end = 0, ans = 0;

    while (end < len)
    {
        curr[txt[end++]]++;

        if (curr == og)
        {
            ans++;
        }
    }

    for (int idx = end; idx < n; idx++)
    {
        curr[txt[idx]]++;
        curr[txt[start]]--;

        if (curr[txt[start]] == 0)
        {
            curr.erase(txt[start]);
        }

        start++;

        if (curr == og)
        {
            ans++;
        }
    }

    return ans;
}