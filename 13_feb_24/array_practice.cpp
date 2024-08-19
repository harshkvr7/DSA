#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 5> arr{1, 2, 3, 4, 5}; // initialization

    cout << "First element : " << arr.front() << endl; // first element

    cout << "Last element :" << arr.back() << endl; // last element

    cout << "Element present at index 0 : " << " is " << arr.at(0) << endl; // access elemnt at index

    auto check = find(arr.begin(), arr.end(), 3); // find element

    if (check != arr.end())
    {
        cout << "Element 3 is at index : " << check - arr.begin() << endl;
    }
    else
    {
        cout << "Not Found\n" << endl;
    }

    reverse(arr.begin(), arr.end()); // reverse array

    cout << "Minimum element in the array is " << *min_element(arr.begin(), arr.end()) << endl; // min element

    cout << "Maximum element in the array is " << *max_element(arr.begin(), arr.end()) << endl; // max element

    for (int idx = 0; idx < arr.size(); idx++) // traversal
    {
        cout << arr[idx] << " ";
    }

    cout << endl;

    return 0;
}