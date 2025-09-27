// 分支结构
#include <iostream>
using namespace std;

int main()
{
    int a[10], b = 0, cnt = 0;
    for(int i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }
    cin >> b;
    b += 30;
    for(int i = 0; i < 10; ++i)
    {
        if(a[i] <= b)
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}