#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int one, two;
        
        one = 0;
        two = 0;

        for (int num : nums) {
            one = (one ^ num) & ~two;
            two = (two ^ num) & ~one;
        }

        return one;
    }