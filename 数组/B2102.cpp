#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
#include <limits>
using namespace std;

int main(){
    int number[5][5];
    int max[5];
    int min[5];

    for (int i = 0; i < 5; i++)
    {
        max[i] = 0;
        min[i] = numeric_limits<int>::max();
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> number[i][j];
            // 记录每一行的最大值
            if(max[i] < number[i][j]) max[i] = number[i][j];
            // 记录每一列的最小值
            if(min[j] > number[i][j]) min[j] = number[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(max[i] == number[i][j] && min[j] == number[i][j])
            {
                cout << i + 1 << ' ' << j + 1 << ' ' << number[i][j] << endl;
                return 0;
            }
        }
    }
    cout << "not found" << endl;
}