#include <iostream>
using namespace std;

int main(){
    double F;
    cin >> F;

    cout.precision(5);
    cout << fixed;

    cout << 5 * (F - 32) / 9 << endl;
}