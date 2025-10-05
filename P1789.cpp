// 数组
#include <iostream>
using namespace std;

bool is_valid(int x, int n)
{
    if(x >= 0 && x < n)
    {
        return true;
    }
    return false;
}

void torch(int** map, int x, int y, int n)
{
    for(int i = x - 2; i <= x + 2; ++i)
    {
        if(i >= 0 && i < n)
        {
            map[i][y] = 0;
        }
    }
    for(int i = y - 2; i <= y + 2; ++i)
    {
        if(i >= 0 && i < n)
        {
            map[x][i] = 0;
        }
    }
    if(is_valid(x - 1, n) && is_valid(y - 1, n))
    {
        map[x - 1][y - 1] = 0;
    }
    if(is_valid(x + 1, n) && is_valid(y - 1, n))
    {
        map[x + 1][y - 1] = 0;
    }
    if(is_valid(x - 1, n) && is_valid(y + 1, n))
    {
        map[x - 1][y + 1] = 0;
    }
    if(is_valid(x + 1, n) && is_valid(y + 1, n))
    {
        map[x + 1][y + 1] = 0;
    }
}

void glow_stone(int** map, int x, int y, int n)
{
    for(int i = x - 2; i <= x + 2; ++i)
    {
        for(int j = y - 2; j <= y + 2; ++j)
        {
            if(i >= 0 && i < n && j >= 0 && j < n)
            {
                map[i][j] = 0;
            }
        }
    }
}

int main()
{
    int n, m, k, res = 0;
    cin >> n >> m >> k;

    int** map = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        map[i] = new int[n];
        for(int j = 0; j < n; ++j)
        {
            map[i][j] = 1;
        }
    }

    for(int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        torch(map, x, y, n);
    }

    for(int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        glow_stone(map, x, y, n);
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            res += map[i][j];
        }
    }

    cout << res << endl;

    for(int i = 0; i < n; ++i)
    {
        delete[] map[i];
    }
    delete[] map;

    return 0;
}