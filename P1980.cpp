// 循环结构
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i)
    {
        string s = to_string(i);
        for(int j = 0; j < s.length(); ++j)
        {
            if(s[j] == '0' + x)
            {
                ++cnt;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
// char(x)表示直接将x转换为ASCII码对应为x的字符，而非转化为'x'。