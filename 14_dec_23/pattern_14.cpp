#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int num;

    cin >> num;

    for (int idx = 1; idx <= 10; idx++)
    {
        cout << num << " * " << idx << " = " << num * idx << endl;
    }
    
    return 0;
}