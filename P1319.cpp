// 数组
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, tmp, flg = 0;
    string s;
    vector<int> res;

    getline(cin, s);
    istringstream ss(s);

    ss >> n;
    while(ss >> tmp)
    {
        for(int i = 0; i < tmp; ++i)
        {
            res.push_back(flg);
        }
        if(flg == 0)
        {
            flg = 1;
        }
        else
        {
            flg = 0;
        }
    }

    for(int i = 0; i < res.size(); ++i)
    {
        if(i > 0 && i % n == 0)
        {
            cout << endl;
        }
        cout << res[i];
    }
    cout << endl;

    return 0;
}