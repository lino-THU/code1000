// 循环结构
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string num;
    vector<char> res;
    cin >> num;
    if(num == "0")
    {
        cout << "0" << endl;
        return 0;
    }
    int len = num.length();
    if(num[0] == '-')
    {
        res.push_back('-');
        num.erase(0, 1);
        --len;
    }
    while(num[len - 1] == '0')
    {
        num.erase(len - 1, 1);
        --len;
    }
    for(int i = len - 1; i >= 0; --i)
    {
        res.push_back(num[i]);
    }
    for(int i = 0; i < res.size(); ++i)
    {
        cout << res[i];
    }
    cout << endl;
    return 0;
}