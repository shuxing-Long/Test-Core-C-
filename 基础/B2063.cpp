#include <iostream>
#include "math.h"
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    cout.precision(4);
    cout << fixed;
    // 这里为什么是1.001, 是以为1是原本的人口，
    // 0.001是增长的人口。这样写就免去了相加的步骤
    cout << pow(1.001 , n) * x << endl;
}