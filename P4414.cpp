// 分支结构
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    for(int i = 0; i < 3; ++i)
    {
        char tmp;
        cin >> tmp;
        b[i] = tmp - 'A';
    }
    for(int i = 0; i < 3; ++i)
    {
        cout << a[b[i]] << " "; // 高妙
    }
    cout << endl;
    return 0;
}