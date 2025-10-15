// 字符串
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int res = 0;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            continue;
        }
        ++res;
    }
    cout << res << endl;
    return 0;
}