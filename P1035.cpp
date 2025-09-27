// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int k;
    double res = 0.0, n = 0.0;
    cin >> k;
    while(res <= k)
    {
        res += 1 / ++n;
    }
    cout << n << endl;
    return 0;
}