// 顺序结构
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t1 = 60 * a + b;
    int t2 = 60 * c + d;
    int tmp = t2 - t1;
    int res1 = tmp / 60;
    int res2 = tmp % 60;
    cout << res1 << " " << res2 << endl;
    return 0;
}