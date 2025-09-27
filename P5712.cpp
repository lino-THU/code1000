// 分支结构
#include <iostream>
using namespace std;

int main()
{
    int x;
    scanf("%d", &x);
    if(x > 1)
    {
        printf("Today, I ate %d apples.\n", x);
    }
    else
    {
        printf("Today, I ate %d apple.\n", x);
    }
    return 0;
}