#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows;

    cin >> rows;

    int spaces = 1;
    int spaces2 = rows - 2;

    for (int idx = 0; idx < rows; idx++)
    {
        if (idx <= rows/2)
        {
            for (int idx2 = rows/2+1; idx2 > idx; idx2--)
            {
                cout << "*";
            }

            for (int idx3 = 1; idx3 <= spaces; idx3++)
            {
                cout << " ";
            }
            
            spaces += 2;

            for (int idx2 = rows/2+1; idx2 > idx; idx2--)
            {
                cout << "*";
            }
            
            cout << endl;
        }
        else
        {
            for (int idx2 = 0; idx2 <= idx-rows/2; idx2++)
            {
                cout << "*";
            }

            for (int idx3 = 0; idx3 < spaces2; idx3++)
            {
                cout << " ";
            }
            
            spaces2 -= 2;

            for (int idx2 = 0; idx2 <= idx-rows/2; idx2++)
            {
                cout << "*";
            }
            
            cout << endl;
        }        
    }
    
    return 0;
}