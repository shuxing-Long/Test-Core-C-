#include <iostream>
#include <format>
using namespace std;

int main(){
    double r;
    double pi = 3.14159;
    cin >> r;
    cout.precision(4);
    // 保留小数点
    cout << fixed;
    cout << r * 2 << ' ' << 2 * pi * r << ' ' << pi * r * r << endl;
}