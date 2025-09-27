// 循环结构
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < n - 1; ++i)
    {
        sum += a[i];
    }
    cout << fixed << setprecision(2) << sum / (n - 2) << endl;
    return 0;
}