// 分支结构
#include <iostream>
#include <cmath>
using namespace std;

double pi = 3.141593;

int main()
{
    int n;
    cin >> n;
    double tmp = (4.0 / 3) * pi * (1064);
    switch (n)
    {
    case 1:
        cout << "I love Luogu!" << endl;
        break;
    case 2:
        cout << "6 4" << endl;
        break;
    case 3:
        printf("3\n12\n2\n");
        break;
    case 4:
        cout << "166.667" << endl;
        break;
    case 5:
        cout << "15" << endl;
        break;
    case 6:
        cout << sqrt(6 * 6 + 9 * 9) << endl;
        break;
    case 7:
        printf("110\n90\n0\n");
        break;
    case 8:
        cout << 2 * pi * 5 << endl;
        cout << pi * 5 * 5 << endl;
        cout << (4.0 / 3) * pi * 5 * 5 * 5 << endl;
        break;
    case 9:
        cout << 22 << endl;
        break;
    case 10:
        cout << 9 << endl;
        break;
    case 11:
        cout << 100.0 / 3 << endl;
        break;
    case 12:
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' + 17) << endl;
        break;
    case 13:
        cout << int(cbrt(tmp)) << endl;
        break;
    case 14:
        cout << 50 << endl;
        break;
    default:
        break;
    }
    return 0;
}