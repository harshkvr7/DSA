#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, rotations;

    cin >> num;
    cin >> rotations;

    int length = int(log10(num) + 1);

    if (rotations<0)
    {
        rotations = length - abs(rotations);
    }
    

    rotations %= length;

    int rotate = num / pow(10, length - rotations);

    num %= int(pow(10, length - rotations));

    num = rotate + num * pow(10, rotations);

    cout << num << endl;

    return 0;
}
