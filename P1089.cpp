// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int rest = 0, store = 0, flg = 0, a[12] = {0};
    for(int i = 0; i < 12; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 12; ++i)
    {
        rest += 300;
        if(rest < a[i])
        {
            flg = (-1) * (i + 1);
            break;
        }
        while(rest - a[i] >= 100)
        {
            rest -= 100;
            store += 1;
        }
        rest -= a[i];
    }
    cout << ((flg == 0) ? 120 * store + rest : flg) << endl;
    return 0;
}