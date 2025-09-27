// 分支结构
#include <iostream>
#include <algorithm>
using namespace std;

int a[3], b[3], c[3] = {0, 0, 0}, d[3] = {0, 0, 0}, n;

int main()
{
    cin >> n;
    for(int i = 0; i < 3; ++i)
    {
        cin >> a[i] >> b[i];
        do
        {
            c[i] += b[i];
            d[i] += a[i];
        } while (d[i] < n);
    }
    sort(c, c + 3);
    cout << c[0] << endl;
    return 0;
}