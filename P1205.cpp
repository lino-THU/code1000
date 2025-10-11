// 数组
// 故意不写注释，看看下一次看到这个奇妙代码还能不能看懂，笑(*^_^*)
#include <iostream>
using namespace std;

int** fz(int n, int** sq)
{
    int** n_sq = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        n_sq[i] = new int[n];
        for(int j = 0; j < n; ++j)
        {
            n_sq[i][j] = sq[i][j]; 
        }
    }

    return n_sq;
}

void sc(int n, int** n_sq)
{
    for(int i = 0; i < n; ++i)
    {
        delete[] n_sq[i];
    }
    delete[] n_sq;

    return;
}

void t1(int n, int** sq)
{
    int** tmp = fz(n, sq);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            sq[i][j] = tmp[n - 1 - j][i];
        }
    }
    sc(n, tmp);
    return;
}

void t2(int n, int** sq)
{
    t1(n, sq);
    t1(n, sq);
    return;
}

void t3(int n, int** sq)
{
    t1(n, sq);
    t1(n, sq);
    t1(n, sq);
    return;
}

void t4(int n, int** sq)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n / 2; ++j)
        {
            swap(sq[i][j], sq[i][n - j - 1]);
        }
    }

    return;
}

bool pd(int n, int** sq, int** _sq)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(sq[i][j] != _sq[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

bool _1(int n, int** sq, int** _sq)
{
    int** n_sq = fz(n, sq);
    t1(n, n_sq);
    if(pd(n, n_sq, _sq))
    {
        cout << 1 << endl;
        sc(n, n_sq);
        return true;
    }
    sc(n, n_sq);
    return false;
}

bool _2(int n, int** sq, int** _sq)
{
    int** n_sq = fz(n, sq);
    t2(n, n_sq);
    if(pd(n, n_sq, _sq))
    {
        cout << 2 << endl;
        sc(n, n_sq);
        return true;
    }
    sc(n, n_sq);
    return false;
}

bool _3(int n, int** sq, int** _sq)
{
    int** n_sq = fz(n, sq);
    t3(n, n_sq);
    if(pd(n, n_sq, _sq))
    {
        cout << 3 << endl;
        sc(n, n_sq);
        return true;
    }
    sc(n, n_sq);
    return false;
}

bool _4(int n, int** sq, int** _sq)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(sq[i][n - j - 1] != _sq[i][j])
            {
                return false;
            }
        }
    }
    cout << 4 << endl;
    return true;
}

bool _5(int n, int** sq, int** _sq)
{
    int** n_sq = fz(n, sq);
    t4(n, n_sq);
    int** n_1 = fz(n, n_sq);
    int** n_2 = fz(n, n_sq);
    int** n_3 = fz(n, n_sq);
    t1(n, n_1);
    t2(n, n_2);
    t3(n, n_3);
    if(pd(n, n_1, _sq) || pd(n, n_2, _sq) || pd(n, n_3, _sq))
    {
        cout << 5 << endl;
        sc(n, n_sq);
        sc(n, n_1);
        sc(n, n_2);
        sc(n, n_3);
        return true;
    }
    sc(n, n_sq);
    sc(n, n_1);
    sc(n, n_2);
    sc(n, n_3);
    return false;
}

bool _6(int n, int** sq, int** _sq)
{
    if(pd(n, sq, _sq))
    {
        cout << 6 << endl;
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int **sq = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        sq[i] = new int[n];
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            char tmp;
            cin >> tmp;
            if(tmp == '-')
            {
                sq[i][j] = 1;
            }
            else
            {
                sq[i][j] = 0;
            }
        }
    }

    int **_sq = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        _sq[i] = new int[n];
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            char tmp;
            cin >> tmp;
            if(tmp == '-')
            {
                _sq[i][j] = 1;
            }
            else
            {
                _sq[i][j] = 0;
            }
        }
    }

    if(_1(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }
    if(_2(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }
    if(_3(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }
    if(_4(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }
    if(_5(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }
    if(_6(n, sq, _sq))
    {
        for(int i = 0; i < n; ++i)
        {
            delete[] sq[i];
            delete[] _sq[i];
        }
        delete[] sq;
        delete[] _sq;
        return 0;
    }

    cout << 7 << endl;

    for(int i = 0; i < n; ++i)
    {
        delete[] sq[i];
        delete[] _sq[i];
    }
    delete[] sq;
    delete[] _sq;

    return 0;
}