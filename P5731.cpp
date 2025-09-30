// 数组
#include <iostream>
using namespace std;


int main()
{
    int n, x = 0, y = 0, cnt = 1;
    cin >> n;
    int** a = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        a[i] = new int[n];
        for(int j = 0; j < n; ++j)
        {
            a[i][j] = 0;
        }
    }
    a[0][0] = cnt++;
    while(cnt <= n * n)
    {
        while(y + 1 < n && a[x][y + 1] == 0)
        {
            a[x][++y] = cnt++;
        }
        while(x + 1 < n && a[x + 1][y] == 0)
        {
            a[++x][y] = cnt++;
        }
        while(y - 1 >= 0 && a[x][y - 1] == 0)
        {
            a[x][--y] = cnt++;
        }
        while(x - 1 >= 0 && a[x - 1][y] == 0)
        {
            a[--x][y] = cnt++;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%3d", a[i][j]);
        }
        cout << endl;
    }
    for(int i = 0; i < n; ++i)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}