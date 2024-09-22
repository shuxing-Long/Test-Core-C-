#include "stdio.h"
#include <iostream>
using namespace std;
#include <format>
int main(){
    int a,b,c;
    // scanf("%d%d%d", &a, &b, &c);
    // printf("%8d %8d %8d\n", a, b, c);
    cin >> a >> b >> c;
    // cout.width(8);
    // cout << a << " ";
    // cout.width(8);
    // cout << b << " ";
    // cout.width(8);
    // cout << c << endl;
    cout << format("{:8} {:8} {:8}\n",a,b,c);
}