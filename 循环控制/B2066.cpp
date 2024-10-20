#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;
    double sum =0;
    while (a--)
    {
        double x, y;
        int n;
        double l = 0;
        cin >> x >> y >> n;
        sum += hypot(x  , y) / 25 + n * 1.5;
    }

    cout << int(ceil(sum)) << endl;
}