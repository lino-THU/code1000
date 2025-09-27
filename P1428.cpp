// 数组
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        int tmp = 0;
        for(int j = i - 1; j >= 0; --j)
        {
            if(a[j] < a[i])
            {
                ++tmp;
            }
        }
        cout << tmp << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}