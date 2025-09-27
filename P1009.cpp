#include <iostream>
using namespace std;

const int MAX = 100; // 定义数组大小
int n, a[MAX] = {0}, b[MAX] = {0};

int main() {
    cin >> n;
    b[1] = 1; // 初始化b为1，表示0! = 1
    for (int i = 1; i <= n; i++) {
        // 计算当前阶乘: b = b * i
        for (int k = 1; k < MAX; k++) {
            b[k] *= i;
        }
        // 处理b的进位，循环到MAX-1（即98）以确保不越界
        for (int k = 1; k < MAX - 1; k++) {
            if (b[k] >= 10) {
                b[k + 1] += b[k] / 10;
                b[k] %= 10;
            }
        }

        // 将当前阶乘b加到总和a中
        for (int k = 1; k < MAX; k++) {
            a[k] += b[k];
        }
        // 处理a的进位，循环到MAX-1
        for (int k = 1; k < MAX - 1; k++) {
            if (a[k] >= 10) {
                a[k + 1] += a[k] / 10;
                a[k] %= 10;
            }
        }
    }

    // 查找最高非零位
    int cnt = MAX - 1;
    while (cnt > 1 && a[cnt] == 0) {
        cnt--;
    }

    // 输出结果
    for (int i = cnt; i >= 1; i--) {
        cout << a[i];
    }
    return 0;
}