// 字符串
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int max_n, min_n, num;
    int alphabet[26] = {0}, prime[100];
    for(int i = 0; i < 100; ++i)
    {
        prime[i] = 1; // 非零初始化需要循环
    }
    string word;
    cin >> word;
    for(int i = 0; i < word.size(); ++i)
    {
        ++alphabet[word[i] - 'a'];
    }
    sort(alphabet, alphabet + 26); // sort接受头尾迭代器或者指针，注意是左闭右开，不是接受数组的具体值
    max_n = alphabet[25];
    for(int i = 0; i < 26; ++i)
    {
        if(alphabet[i] > 0)
        {
            min_n = alphabet[i];
            break;
        }
    }
    num = max_n - min_n;
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i < 100; ++i)
    {
        if(prime[i])
        {
            for(int k = 2; k * i < 100; ++k)
            {
                prime[k * i] = 0;
            }
        }
    }
    if(prime[num])
    {
        cout << "Lucky Word" << endl;
        cout << num << endl;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}