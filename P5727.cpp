// 数组
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    stack<int> hailstone;
    cin >> n;
    hailstone.push(n);
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        hailstone.push(n);
    }
    while(!hailstone.empty())
    {
        cout << hailstone.top() << " ";
        hailstone.pop();
    }
    return 0;
}