#include <iostream>
#include <format>
#include "stdio.h"

using namespace std;

int main(){
    char c;
    int i;
    float f;
    double d;

    // scanf("%c%d%f%lf", &c, &i, &f, &d);
    // printf("%c %d %.6f %.6lf\n",c,i,f,d);

    cin >> c >> i >> f >> d;
    // cout.precision(6);
    // cout<< fixed;
    // cout << c << ' ' << i << ' ' << f << ' '<< d << endl;

    cout << format("{} {} {:.6f} {:.6f}\n",c,i,f,d);
}