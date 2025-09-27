// 循环结构
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, max = INT_MIN, min = INT_MAX;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        max = (tmp > max) ? tmp : max;
        min = (tmp < min) ? tmp : min;
    }
    cout << max - min << endl;
    return 0;
}