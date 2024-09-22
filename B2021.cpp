#include "stdio.h"
#include <iostream>
#include <format>
using namespace std;
int main(){
    float f;
    // scanf("%f", &f);
    // printf("%.3f\n",f);
    cin >> f;
    // cout.precision(3);
    // // 输出类型改为 fixed
    // cout << fixed;
    // cout << f << endl;

    cout << format("{:.3f}", f) << endl;
}