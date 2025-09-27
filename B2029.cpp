// 顺序结构
#include <iostream>
using namespace std;

int main()
{
    int res, tmp;
    double h1, r1, h, r, pi = 3.14, v;
    cin >> h1 >> r1;
    h = h1 / 10;
    r = r1 / 10;
    v = pi * r * r * h;
    tmp = 20 / v;
    if(tmp * v < 20)
    {
        res = tmp + 1;
    }
    else
    {
        res = tmp;
    }
    cout << res << endl;
    return 0;
}