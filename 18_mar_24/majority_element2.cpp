#include <bits/stdc++.h>
using namespace std;

// By storing the frequency of elements in a map
vector<int> majorityElement(vector<int> &vec)
{
    int len = vec.size();

    vector<int> vi;

    if (len == 1)
    {
        vi.push_back(vec[0]);
        return vi;
    }

    map<int, int> freqmap;

    for (int idx = 0; idx < len; idx++)
    {
        freqmap[vec[idx]]++;
    }

    map<int, int>::iterator it;

    it = freqmap.begin();

    while (it != freqmap.end())
    {
        float num = it->second;
        
        if (num > (len / 3.0))
        {
            vi.push_back(it->first);
        }
            
        ++it;
    }

    return vi;
}