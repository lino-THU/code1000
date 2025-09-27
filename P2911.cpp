// 数组
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int m, n, p, max = INT_MIN, res;
    cin >> m >> n >> p;
    int* points = new int[m + n + p + 1];
    for(int i = 0; i <= m + n + p; ++i)
    {
        points[i] = 0;
    }
    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            for(int k = 1; k <= p; ++k)
            {
                ++points[i + j + k];
            }
        }
    }
    for(int i = 1; i <= m + n + p; ++i)
    {
        if(points[i] > max)
        {
            max = points[i];
            res = i;
        }
    }
    cout << res << endl;
    delete[] points;
    return 0;
}