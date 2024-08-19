#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec1; // initialization

    for (int idx = 1; idx <= 5; idx++)
    {
        vec1.push_back(idx); // insertion at end
    }

    vec1.pop_back(); // removal at end

    vec1.insert(vec1.begin() + 2, 5); // insertion at random position

    vec1.erase(vec1.begin() + 1); // removal at random position

    cout << find(vec1.begin(), vec1.end(), 5) - vec1.begin() << endl; // find index of element

    reverse(vec1.begin(), vec1.end()); // reverse

    cout << "Min :" << *min_element(vec1.begin(), vec1.end()) << endl; // min element

    cout << "Max :" << *max_element(vec1.begin(), vec1.end()) << endl; // max element

    for (int idx = 0; idx < vec1.size(); idx++) // traversal
    {
        cout << vec1[idx] << " ";
    }

    cout << endl;

    return 0;
}
