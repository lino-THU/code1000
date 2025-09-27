// 顺序结构
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double t = 0;
    int n = 0;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t / n << endl;
    cout << 2 * n << endl;
    return 0;
}