// 字符串
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); ++i)
    {
        if(isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << str;
    return 0;
}