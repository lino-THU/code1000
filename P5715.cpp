// 分支结构
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3];
    for(int i = 0; i < 3; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + 3); // 注意参数实际是左闭右开的，我们常用的vec.end()返回的也是向量末尾的下一个迭代器
    cout << a[0] << " " << a[1] << " " << a[2] << " " << endl;
    return 0;
}