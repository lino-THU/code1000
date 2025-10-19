// 字符串
#include <cstdio>

int main()
{
    int n, cnt = 0;
    char str[100];
    scanf("%d", &n);
    scanf("%s", str);
    for(int i = 0; i < n - 1; ++i)
    {
        if(str[i] == 'V' && str[i + 1] == 'K')
        {
            str[i] = 'O';
            str[++i] = 'O';
            ++cnt;
        }
    }
    for(int i = 0; i < n - 1; ++i)
    {
        if(str[i] == str[i + 1] && str[i] != 'O')
        {
            ++cnt;
            break;
        }
    }
    printf("%d\n", cnt);
    return 0;
}