#include <bits/stdc++.h>
using namespace std;

//compares two characters a and b based on their order in the order string
bool compare(char a, char b, const string &order)
{
    return order.find(a) < order.find(b);
}

string customSortString(string order, string s)
{
    sort(s.begin(), s.end(), [&](char a, char b){ return compare(a, b, order); });

    return s;
}