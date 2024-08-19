#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int rows; 

    cin >> rows;

    int num = 0;

    for (int idx = 1; idx <= rows; idx++)
    {
        for (int idx2 = 0; idx2 < idx; idx2++)
        {
            num += 1;

            cout << num << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}