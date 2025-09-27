// 分支结构
#include <iostream>
using namespace std;

int main()
{
    double m, h;
    cin >> m >> h;
    double bmi = m / (h * h);
    if(bmi < 18.5)
    {
        cout << "Underweight" << endl;
        return 0;
    }
    if(bmi < 24)
    {
        cout << "Normal" << endl;
        return 0;
    }
    else
    {
        cout << bmi << endl;
        cout << "Overweight" << endl;
    }
    return 0;
}