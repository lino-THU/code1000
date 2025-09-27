// 分支结构
#include <iostream>
using namespace std;

int main()
{
    int x, n, tmp = 0; // 非输入变量一定要正确初始化，否则OJ会报错
    cin >> x >> n;
    for(int i = 1; i <= n; ++i)
    {
        if(x != 6 && x != 7)
        {
            ++tmp;
        }
        if(x == 7)
        {
            x = 1;
        }
        else
        {
            ++x;
        }
    }
    cout << 250 * tmp << endl;
    return 0;
}