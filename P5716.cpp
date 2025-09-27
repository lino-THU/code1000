// 分支结构
#include <iostream>
using namespace std;

int main()
{
    int y, d;
    cin >> y >> d;
    if(d == 2)
    {
        if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        {
            cout << 29 << endl;
        }
        else
        {
            cout << 28 << endl;
        }
    }
    else if(d == 1 || d == 3 || d == 5 || d == 7 || d == 8 || d == 10 || d == 12)
    {
        cout << 31 << endl;
    }
    else
    {
        cout << 30 << endl;
    }
    return 0;
}