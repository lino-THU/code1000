// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int a, cnt = 1;
    cin >> a;
    while (a > 1)
    {
        a /= 2;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}