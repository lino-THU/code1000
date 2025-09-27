// 数组
#include <iostream>
using namespace std;

int main()
{
    int n, a[7], b[7] = {0};
    cin >> n;
    for(int i = 0; i < 7; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        int cnt = 0;
        for(int j = 0; j < 7; ++j)
        {
            int tmp;
            cin >> tmp;
            for(int k = 0; k < 7; ++k)
            {
                if(a[k] == tmp)
                {
                    ++cnt;
                    break;
                }
            }
        }
        if(cnt != 0)
        {
            ++b[7 - cnt];
        }
    }
    for(int i = 0; i < 7; ++i)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}