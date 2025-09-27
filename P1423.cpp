// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    double s, a = 0.0;
    cin >> s;
    while(a < s)
    {
        a =  0.98 * a + 2.0;
        ++cnt;
    }
    cout << cnt << endl;
    return 0;
}