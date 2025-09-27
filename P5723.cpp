// 循环结构
#include <iostream>
#include <vector>
using namespace std;

int a[10001] = {0};

int main()
{
    int l, cnt = 0, sum = 0;
    cin >> l;
    vector<int> v;
    for(int i = 2; i <= 10000; ++i)
    {
        for(int k = 2; k * i <= 10000; ++k)
        {
            a[k * i] = 1;
        }
        if(a[i] == 0)
        {
            v.push_back(i);
        }
    }
    while(true)
    {
        sum += v[cnt];
        if(sum > l)
        {
            break;
        }
        ++cnt;
    }
    for(int i = 0; i < cnt; ++i)
    {
        cout << v[i] << endl;
    }
    cout << cnt << endl;
    return 0;
}