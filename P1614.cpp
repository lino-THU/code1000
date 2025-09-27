// 数组
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m, min = INT_MAX, tmp = 0, cnt;
    cin >> n >> m;
    int* a = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(cnt = 0;cnt < m; ++cnt)
    {
        tmp += a[cnt];
    }
    while(cnt < n)
    {
        min = (tmp < min) ? tmp : min;
        tmp -= a[cnt - m];
        tmp += a[cnt++];
    }
    min = (tmp < min) ? tmp : min;
    cout << min << endl;
    delete[] a;
    return 0;
}