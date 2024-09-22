#include <iostream>
#include "math.h"
using namespace std;

int main(){
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    cout.precision(3);
    cout << fixed;
    cout << hypot(xa - xb, ya - yb) << endl;
    // cout << sqrt(pow(xa - xb, 2) + pow(ya - yb, 2)) << endl;
}