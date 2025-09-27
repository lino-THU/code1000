// 循环结构
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, min = INT_MAX;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        min = min < tmp? min : tmp;
    }
    cout << min << endl;
    return 0;
}