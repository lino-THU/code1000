// 循环结构
#include <iostream>
using namespace std;

int main()
{
    int N, n;
    cin >> N;
    n = N / 52;
    for (int x = 100; x > 0; --x)
    {
        int y = n - 7 * x;
        if(y <= 0 || y % 21 != 0)
        {
            continue;
        }
        int k = y / 21;
        printf("%d\n%d\n", x, k);
        break;
    }
    return 0;
}