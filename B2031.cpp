#include <iostream>
using namespace std;
#include "math.h"

int main(){
    double x1, y1 ,x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // 根据(x, y) 求向量的长度(也就是三角形的某条边)
    double a = hypot(x1 - x2 , y1 - y2);
    double b = hypot(x1 - x3 , y1 - y3);
    double c = hypot(x2 - x3 , y2 - y3);
    // 计算半周长
    double p = (a + b + c) / 2;
    cout.precision(2);
    cout << fixed;
    // 使用海伦公式计算三角形的面积
    cout << sqrt(p * (p - a) * (p - b ) * (p - c)) << endl;
}