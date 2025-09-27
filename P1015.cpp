// 回文数
#include <iostream>
#include <cstring>
using namespace std;

int n, len, a[256], b[256];
char s[128];

bool judge()
{
    int t = len / 2;
    for(int i = 0; i <= t; ++i)
    {
        if(a[i] != a[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    scanf("%d%s", &n, s);
    len = strlen(s);
    for(int i = 0; i < len; ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            a[len - 1 - i] = s[i] - '0'; // 注意输入对于字符数组s是倒着的，所以为了让数组a低地址与低位对应，要倒过来读入
        }
        else
        {
            a[len - 1 - i] = s[i] - 'A' + 10; // 处理16进制的情况
        }
    }

    int flg = -1; // -1表示还没有找到回文数
    for(int i = 1; i <= 30; ++i)
    {
        for(int j = 0; j < len; ++j)
        {
            b[j] = a[len - 1 - j]; // 倒过来复制
        }
        for(int j = 0; j < len; ++j)
        {
            a[j] += b[j]; // 加法运算
        }
        for(int j = 0; j < len; ++j)
        {
            if(a[j] >= n)
            {
                a[j] -= n;
                a[j + 1]++;
            }
            if(a[len])
            {
                len++; // 扩大数组长度
            }
        }
        if(judge())
        {
            flg = i;
            printf("STEP=%d\n", flg);
            break;
        }
    }
    if(flg == -1)
    {
        printf("Impossible!\n");
    }

    return 0;
}