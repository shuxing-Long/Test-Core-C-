#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int m, n, sum = 0;
    cin >> m >> n;
    int number[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> number[i][j];
        }
    }
    // 第一行
    for (int i = 0; i < n; i++)
    {
        sum += number[0][i];
    }
    // 最后一列
    for (int i = 1; i < m; i++)
    {
        sum += number[i][n-1];
    }
    // 最后一行
    for (int i = n - 2; i >= 0; i--)
    {
        sum += number[m - 1][i];
    }
    // 最后一列
    for (int i = m - 2; i > 0; i--)
    {
        sum += number[i][0];
    }

    cout << sum << endl;
}