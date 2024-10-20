#include <iostream>
#include "stdio.h"
#include <algorithm>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    // if(a >= b && a >= c) cout << a << endl;
    // else if(b >= a && b >= c) cout << b << endl;
    // else cout << c << endl;
    cout << max(max(a,b),c) << endl;
}