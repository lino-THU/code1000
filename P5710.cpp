// 分支结构
#include <iostream>
using namespace std;

int x;

bool pd1()
{
    return (!(x % 2));
}

bool pd2()
{
    if(x > 4 && x <= 12)
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> x;
    cout << (pd1() && pd2()) << " ";
    cout << (pd1() || pd2()) << " ";
    cout << ((!pd1() && pd2()) || (pd1() && !pd2())) << " ";
    cout << (!pd1() && !pd2()) << endl;
    return 0;
}