#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }

    return false;
}

int maxVowels(string s, int k)
{
    int left = 0;
    int right = 0;

    int ans = 0, vowels = 0;

    while (right < k)
    {
        if (isVowel(s[right]))
        {
            vowels++;
        }

        right++;
    }

    ans = vowels;

    for (int idx = right; idx < s.size(); idx++)
    {
        if (isVowel(s[idx]))
        {
            vowels++;
        }
        if (isVowel(s[left]))
        {
            vowels--;
        }

        left++;
        ans = max(ans, vowels);
    }

    return ans;
}