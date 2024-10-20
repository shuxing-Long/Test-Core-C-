#include <iostream>
using namespace std;

int main(){
    // x * a =  base + inc * a
    // y * b =  base + inc * b
    // inc = z
    // x * a =  base + z * a
    // y * b =  base + z * b
    // y * b - x * a  = z * (b - a)
    // z = (y * b - x * a) / (b - a)

    double x, a, y, b;
    cin >> x >> a >> y >> b;
    cout.precision(2);
    cout << fixed;
    cout << (y * b - x * a) / (b - a) << endl;
}