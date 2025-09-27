// Cantor表
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1, tmp = 0, a = 1, b = 1; // a, b为分子和分母
    while(cnt < n)
    {
        if(tmp == 0)
        {
            if(a == 1)
            {
                ++b;
                ++cnt;
                tmp = 1;
            }
            else
            {
                --a;
                ++b;
                ++cnt;
            }
        }
        else
        {
            if(b == 1)
            {
                ++a;
                ++cnt;
                tmp = 0;
            }
            else
            {
                ++a;
                --b;
                ++cnt;
            }
        }
    }
    cout << a << "/" << b << endl;
    return 0;
}