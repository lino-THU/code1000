// 数组
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;
    int** a = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        a[i] = new int[3];
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(abs(a[i][0] - a[j][0]) <= 5 && abs(a[i][1] - a[j][1]) <= 5 && abs(a[i][2] - a[j][2]) <= 5)
            {
                if(abs(a[i][0] + a[i][1] + a[i][2] - a[j][0] - a[j][1] - a[j][2]) <= 10)
                {
                    ++res;
                }
            }
        }
    }
    cout << res << endl;
    for(int i = 0; i < n; ++i)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}