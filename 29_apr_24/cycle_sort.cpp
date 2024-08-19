#include <bits/stdc++.h>
using namespace std;

void cycle_sort(vector<int> &arr)
{
    int idx = 0;

    while(idx < arr.size())
    {
        if (arr[idx] == idx + 1)
        {
            idx++;
        }
        else
        {
            swap(arr[idx], arr[arr[idx] - 1]);
        }
    }
}

int main(){
    int n; 

    cin >> n;
    
    cout << "Enter nums in range 1 to n" << endl;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        arr.push_back(temp);
    }
    
    cout << "Before sorting :" << endl;

    for(int num : arr)
    {
        cout << num << " ";
    }

    cout << endl;

    cycle_sort(arr);

    cout << "After sorting :" << endl;

    for(int num : arr)
    {
        cout << num << " ";
    }
    
    return 0;
}