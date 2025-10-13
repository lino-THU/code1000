// 字符串
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;

    for(int i = 0; i < str.length(); ++i)
    {
        int tmp = str[i] + n; // 如果不用整型暂存，会发生str[i] > 127而导致溢出
        while(tmp > 'z') // 整型提升原则，char作为较小的整型会被转换为更大的整型，而不会反过来
        {
            tmp -= 26;
        }
        str[i] = tmp;
    }
    cout << str << endl;

    return 0;
}