// 字符串
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0, boy = 0, girl = 0;
    while(cnt < str.length())
    {
        if(str[cnt] == 'b')
        {
            ++boy;
            ++cnt;
            if(str[cnt] == 'o')
            {
                ++cnt;
                if(str[cnt] == 'y')
                {
                    ++cnt;
                }
            }
            continue;
        }
        if(str[cnt] == 'o')
        {
            ++boy;
            ++cnt;
            if(str[cnt] == 'y')
            {
                ++cnt;
            }
            continue;
        }
        if(str[cnt] == 'y')
        {
            ++boy;
            ++cnt;
            continue;
        }
        if(str[cnt] == 'g')
        {
            ++girl;
            ++cnt;
            if(str[cnt] == 'i')
            {
                ++cnt;
                if(str[cnt] == 'r')
                {
                    ++cnt;
                    if(str[cnt] == 'l')
                    {
                        ++cnt;
                    }
                }
            }
            continue;
        }
        if(str[cnt] == 'i')
        {
            ++girl;
            ++cnt;
            if(str[cnt] == 'r')
            {
                ++cnt;
                if(str[cnt] == 'l')
                {
                    ++cnt;
                }
            }
            continue;
        }
        if(str[cnt] == 'r')
        {
            ++girl;
            ++cnt;
            if(str[cnt] == 'l')
            {
                ++cnt;
            }
            continue;
        }
        if(str[cnt] == 'l')
        {
            ++girl;
            ++cnt;
            continue;
        }
        else
        {
            ++cnt;
            continue;
        }
    }
    cout << boy << endl;
    cout << girl << endl;
    return 0;
}