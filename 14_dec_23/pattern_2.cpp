#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int rows; 

    cin >> rows;

    for (int idx = 1; idx <= rows; idx++)
    {
        for (int idx2 = rows-idx+1; idx2 > 0; idx2--)
        {
            cout << "*\t";
        }

        cout << endl;        
    }

    return 0;
}