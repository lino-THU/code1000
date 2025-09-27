// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int k, cnt = 1, res = 0, tmp = 0;
    cin >> k;
    for(int i = 1; i <= k; ++i)
    {
        res += cnt;
        ++tmp;
        if(tmp == cnt)
        {
            ++cnt;
            tmp = 0;
        }
    }
    cout << res << endl;
    return 0;
}