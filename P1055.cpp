// 分支结构
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string str;
    vector<int> num;
    int tmp = 0;
    getline(cin, str); // 结尾的换行符'\n'也被读入

    for(int i = 0; i < str.length(); ++i)
    {
        if(isdigit(str[i]))
        {
            num.push_back(str[i] - '0');
        }
        if(str[i] == 'X')
        {
            num.push_back(10);
        }
    }

    for(int i = 0; i < num.size() - 1; ++i)
    {
        tmp += num[i] * (i + 1);
    }
    tmp %= 11;

    if(tmp == num[num.size() - 1])
    {
        cout << "Right" << endl;
    }
    else
    {
        num[num.size() - 1] = tmp;
        if(num[num.size() - 1] == 10)
        {
            printf("%d-%d%d%d-%d%d%d%d%d-%c\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], 'X');
        }
        else
        {
            printf("%d-%d%d%d-%d%d%d%d%d-%d", num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9]);
        }
    }
    return 0;
}