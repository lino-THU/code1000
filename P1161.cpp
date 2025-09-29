// 数组
#include <iostream>
using namespace std;

int light[2000001];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        double a;
        int t;
        cin >> a >> t;
        for(int i = 1; i <= t; ++i)
        {
            int tmp = int(i * a);
            ++light[tmp];
        }
    }
    for(int i = 1; i <= 2000000; ++i)
    {
        if(light[i] % 2 == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}