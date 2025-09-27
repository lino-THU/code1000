// 分支结构
#include <iostream>
using namespace std;

int main()
{
    int m, t, s;
    int tmp;
    cin >> m >> t >> s;
    if(!t)
    {
        cout << 0 << endl;
        return 0;
    }
    if(s % t)
    {
        tmp = s / t + 1;
    }
    else
    {
        tmp = s / t;
    }
    if(tmp >= m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << m - tmp << endl;
    }
    return 0;
}