// 顺序结构
#include <iostream>
using namespace std;

int main()
{
    int s, v, cost, h1 = 0, m1 = 0;
    cin >> s >> v;
    if(s % v)
    {
        cost = s / v + 11;
    }
    else
    {
        cost = s / v + 10;
    }
    h1 = cost / 60;
    m1 = cost % 60;
    if(h1 >= 8 && m1 > 0)
    {
        int h = 31 - h1;
        int m = 60 - m1;
        if(h >= 10)
        {
            cout << h << ":";
        }
        else
        {
            cout << "0" << h << ":";
        }
        if(m >= 10)
        {
            cout << m << endl;
        }
        else
        {
            cout << "0" << m << endl;
        }
    }
    else
    {
        if(m1)
        {
            cout << "0" << 8 - 1 - h1 << ":";
            if(60 - m1 < 10)
            {
                cout << "0" << 60 - m1;
            }
            else
            {
                cout << 60 - m1 << endl;
            }
        }
        else
        {
            cout << "0" << 8 - h1 << ":00" << endl;
        }
    }
    return 0;
}