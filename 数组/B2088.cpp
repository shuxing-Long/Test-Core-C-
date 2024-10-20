#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    double c;
    double sum[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    for (int i = 0; i < 10; i++)
    {
        int x;
        cin >> x;
        c += x * sum[i];
    }
    cout.precision(1);
    cout << fixed;
    cout << c << endl;
}