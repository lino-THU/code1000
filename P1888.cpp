// 分支结构
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    int r = a % b;
    while(r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int g = gcd(a[2], a[0]);
    cout << a[0] / g << "/" << a[2] / g << endl;
    return 0;
}