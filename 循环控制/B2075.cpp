#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    int res = 1;
    while (b--)
    {
        // 模拟计算的过程
        res *= a;
        res %= 1000;
    }
    cout.width(3);
    cout.fill('0');
    cout << res << endl;
}