// 采药
#include <iostream>
#include <vector>
using namespace std;

int T, M;

struct medicine
{
    int time;
    int value;
}med[128];

int f[1024];

int main()
{
    cin >> T >> M;
    med[0] = {0, 0};
    for(int i = 1; i <= M; ++i)
    {
        cin >> med[i].time >> med[i].value;
    }
    
    for(int i = 1; i <= M; ++i)
    {
        for(int j = T; j >= 0; --j)
        {
            if(j >= med[i].time)
            {
                f[j] = max(f[j], f[j - med[i].time] + med[i].value);
            }

        }
    }

    cout << f[T] << endl;

    return 0;
}