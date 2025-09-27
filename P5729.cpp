// 数组
#include <iostream>
using namespace std;

int main()
{
    int w, x, h, q, sum = 0;
    cin >> w >> x >> h >> q;
    int*** a = new int**[w + 1];
    for(int i = 0; i <= w; ++i)
    {
        a[i] = new int*[x + 1];
        for(int j = 0; j <= x; ++j)
        {
            a[i][j] = new int[h + 1];
            for(int k = 0; k <= h; ++k)
            {
                a[i][j][k] = 1;
            }
        }
    }
    for(int i = 0; i < q; ++i)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int i = x1; i <= x2; ++i)
        {
            for(int j = y1; j <= y2; ++j)
            {
                for(int k = z1; k <= z2; ++k)
                {
                    a[i][j][k] = 0;
                }
            }
        }
    }
    for(int i = 1; i <= w; ++i)
    {
        for(int j = 1; j <= x; ++j)
        {
            for(int k = 1; k <= h; ++k)
            {
                sum += a[i][j][k];
            }
        }
    }
    cout << sum << endl;
    for(int i = 0; i <= w; ++i)
    {
        for(int j = 0; j <= x; ++j)
        {
            delete[] a[i][j];
        }
        delete[] a[i];
    }
    delete[] a;
    return 0;
}