// 数组
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    string str;
    getline(cin, str);
    n = str.length();
    for(int i = 1; i < n; ++i)
    {
        string tmp;
        getline(cin, tmp);
        str += tmp;
    }
    cout << n;

    if(str.empty())
    {
        return 0;
    }

    char current = '0';
    for(int i = 0; i < str.length(); ++i)
    {
        if(str[i] == current)
        {
            ++count;
        }
        else
        {
            cout << " " << count;
            current = (current == '0') ? '1' : '0';
            count = 1;
        }
    }
    if(count > 0)
    {
        cout << " " << count << endl;
    }

    return 0;
}