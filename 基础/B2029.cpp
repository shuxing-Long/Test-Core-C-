#include <iostream>
#include "math.h"
using namespace std;

int main(){
    int h ,r;
    cin >> h >> r;
    double pi = 3.14;
    double v = pi * r * r * h / 1000;
    cout << ceil(20 / v) << endl;
}