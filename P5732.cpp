// 数组
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int** y_matrix = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        y_matrix[i] = new int[n];
        for(int j = 0; j <= i; ++j)
        {
            if(j == 0 || j == i)
            {
                y_matrix[i][j] = 1;
            }
            else
            {
                y_matrix[i][j] = y_matrix[i - 1][j - 1] + y_matrix[i - 1][j];
            }
            cout << y_matrix[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; ++i)
    {
        delete[] y_matrix[i];
    }
    delete[] y_matrix;
    return 0;
}