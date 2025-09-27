// 分支结构
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 0.4463, b = 0.4663, c = 0.5663, res;
    int x;
    cin >> x;
    if(x <= 150)
    {
        res = a * x;
    }
    else if(x <= 400)
    {
        res = a * 150 + b * (x - 150);
    }
    else
    {
        res = a * 150 + b * 250 + c * (x - 400);
    }
    cout << fixed << setprecision(1) << res << endl;
    return 0;
}