// 循环结构
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n), b(n, 1);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; ++i)
    {
        if(a[i] != a[i - 1] + 1)
        {
            ++cnt;
        }
        else
        {
            ++b[cnt];
        }
    }
    sort(b.begin(), b.end(), cmp);
    cout << b[0] << endl;
    return 0;
}