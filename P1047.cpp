// 数组
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int l, m, sum = 0;
    cin >> l >> m;
    vector<int> a(l + 1, 1);
    for(int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        for(int j = x; j <= y; ++j)
        {
            a[j] = 0;
        }
    }
    for(int i = 0; i <= l; ++i)
    {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}