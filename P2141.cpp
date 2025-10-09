// 数组
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, res = 0;
    scanf("%d", &n);
    vector<int> num(n);
    vector<int> flag(n, 0);

    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            int tmp = num[i] + num[j];
            for(int k = 0; k < n; ++k)
            {
                if(num[k] == tmp)
                {
                    flag[k] = 1;
                    break;
                }
            }
        }
    }

    for(int i = 0; i < n; ++i)
    {
        res += flag[i];
    }
    
    printf("%d\n", res);

    return 0;
}