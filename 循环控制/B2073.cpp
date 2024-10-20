#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int a , b , n;
    cin >> a >> b >> n;
    
    a %= b;
    
    int x = 0;
    while (n--)
    {
        // 模拟计算的过程
        a *= 10;
        x = a / b;
        a -= x * b;
    }
    cout << x << endl;
}