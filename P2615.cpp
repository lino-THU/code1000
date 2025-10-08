// 数组
#include <iostream>
using namespace std;

int main()
{
    int n, last_x, last_y;
    cin >> n;
    int** magic_square = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        magic_square[i] = new int[n];
        for(int j = 0; j < n; ++j)
        {
            magic_square[i][j] = 0;
        }
    }

    magic_square[0][n / 2] = 1; 
    last_x = 0;
    last_y = n / 2;

    for(int i = 2; i <= n * n; ++i)
    {
        if(last_x == 0 && last_y != n - 1)
        {
            magic_square[n - 1][++last_y] = i;
            last_x = n - 1;
            continue;
        }
        if(last_x != 0 && last_y == n - 1)
        {
            magic_square[--last_x][0] = i;
            last_y = 0;
            continue;
        }
        if(last_x == 0 && last_y == n - 1)
        {
            magic_square[++last_x][last_y] = i;
            continue;
        }
        if(last_x != 0 && last_y != n - 1)
        {
            if(magic_square[last_x - 1][last_y + 1] == 0)
            {
                magic_square[last_x - 1][last_y + 1] = i;
                --last_x;
                ++last_y;
                continue;
            }
            else
            {
                magic_square[++last_x][last_y] = i;
                continue;
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << magic_square[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < n; ++i)
    {
        delete[] magic_square[i];
    }
    delete[] magic_square;
    return 0;
}