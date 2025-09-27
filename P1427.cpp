// 数组
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int tmp;
    while(cin >> tmp && tmp != 0)
    {
        a.push_back(tmp);
    }
    for(int i = a.size() - 1; i >= 0; --i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}