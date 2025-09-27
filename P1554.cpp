// 数组
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, n, a[10] = {0};
    string s;
    cin >> m >> n;
    for(int i = m; i <= n; ++i)
    {
        s += to_string(i);
    }
    for(int i = 0; i < s.length(); ++i)
    {
        ++a[s[i] - '0'];
    }
    for(int i = 0; i < 10; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}