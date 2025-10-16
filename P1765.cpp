// 字符串
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int push_times[26] =
    {
        1, 2, 3, 1, 2, 3,
        1, 2, 3, 1, 2, 3, 1, 2, 3,
        1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4,
    };

    int res = 0;
    string str;
    getline(cin, str);

    for(int i = 0; i < str.length(); ++i)
    {
        if(str[i] == ' ')
        {
            res += 1;
        }
        else
        {
            res += push_times[str[i] - 'a'];
        }
    }

    cout << res << endl;
    
    return 0;
}