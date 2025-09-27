// 循环结构
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int n;
    double fn = 0.0, a = 1.0, b = 1.0, c = (1 + sqrt(5.0)) / 2, d = (1 - sqrt(5.0)) / 2;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        a *= c;
        b *= d;
    }
    fn = (a - b) / sqrt(5.0);
    cout << fixed << setprecision(2) << fn << endl;
    return 0;
}