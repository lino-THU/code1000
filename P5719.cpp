// 循环结构
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, k;
    double sum1 = 0, cnt1 = 0, sum2 = 0, cnt2 = 0; // 一定要初始化
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        if(i % k == 0)
        {
            sum1 += i;
            ++cnt1;
        }
        else
        {
            sum2 += i;
            ++cnt2;
        }
    }
    cout << fixed << setprecision(1) << sum1 / cnt1 << " " << sum2 / cnt2 << endl;
    return 0;
}