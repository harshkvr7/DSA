#include <bits/stdc++.h>
using namespace std;

void swap_if_greater(vector<int>& vec, int left, int right)
{
    if(vec[right] < vec[left])
    {
        swap(vec[left], vec[right]);
    }
}

void shell_sort(vector<int>& vec)
{
    int len = vec.size();

    int gap = (len / 2) + (len % 2);

    while(gap > 0)
    {
        int left = 0;
        int right = left + gap;

        while (right < len)
        {
            swap_if_greater(vec, left, right);

            left++;
            right++;
        }

        if (gap == 1) gap = 0;
        
        gap = gap / 2;
    }
}

int main(){
    int n; 

    cin >> n;

    vector<int> arr;

    while (n--)
    {
        int temp;

        cin >> temp;

        arr.push_back(temp);
    }

    cout << "before sorting :" << endl;

    for(auto num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    shell_sort(arr);

    cout << "after sorting :" << endl;
    
    for(auto num : arr)
    {
        cout << num << " ";
    }
    
    return 0;
}