// 顺序结构
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str; // string不会在最后一位存储占位符
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}