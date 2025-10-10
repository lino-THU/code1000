// 数组
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string digits[10][5] =
    {
        {"XXX", "X.X", "X.X", "X.X", "XXX"}, // 0
        {"..X", "..X", "..X", "..X", "..X"}, // 1
        {"XXX", "..X", "XXX", "X..", "XXX"}, // 2
        {"XXX", "..X", "XXX", "..X", "XXX"}, // 3
        {"X.X", "X.X", "XXX", "..X", "..X"}, // 4
        {"XXX", "X..", "XXX", "..X", "XXX"}, // 5
        {"XXX", "X..", "XXX", "X.X", "XXX"}, // 6
        {"XXX", "..X", "..X", "..X", "..X"}, // 7
        {"XXX", "X.X", "XXX", "X.X", "XXX"}, // 8
        {"XXX", "X.X", "XXX", "..X", "XXX"}  // 9
    };

    string _1;
    string _2;
    string _3;
    string _4;
    string _5;

    int n;
    string num;
    cin >> n >> num;
    
    for(int i = 0; i < n; ++i)
    {
        int tmp = num[i] - '0';

        _1 += digits[tmp][0];
        _2 += digits[tmp][1];
        _3 += digits[tmp][2];
        _4 += digits[tmp][3];
        _5 += digits[tmp][4];

        if(i != n - 1)
        {
            _1 += ".";
            _2 += ".";
            _3 += ".";
            _4 += ".";
            _5 += ".";
        }
    }

    cout << _1 << endl;
    cout << _2 << endl;
    cout << _3 << endl;
    cout << _4 << endl;
    cout << _5 << endl;

    return 0;
}