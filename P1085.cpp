// 分支结构
#include <iostream>
#include <algorithm>
using namespace std;

int tmp = -1, flg = -1, day[8];

int main()
{
    for(int i = 1; i <= 7; ++i)
    {
        int a, b;
        cin >> a >> b;
        day[i] = a + b;
        if(day[i] > tmp)
        {
            tmp = day[i];
            flg = i;
        }
    }
    if(tmp > 8)
    {
        cout << flg << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}