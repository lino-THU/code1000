// 循环结构
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a % 2 == 0) ++a;
    for(int i = a; i <= b; i += 2)
    {
        string str = to_string(i);
        int len = str.length();
        bool is_pld = true;
        bool is_prime = true;
        for(int j = 0; j < len / 2; ++j)
        {
            if(str[j] != str[len - 1 - j])
            {
                is_pld = false;
                break;
            }
        }
        if(is_pld)
        {
            for(int k = 3; k * k <= i; k += 2)
            {
                if(i % k == 0)
                {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}