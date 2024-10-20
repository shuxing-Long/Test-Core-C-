#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    if(a < 60) cnt++;
    if(b < 60) cnt++;
    if(c < 60) cnt++;
    cout << (cnt == 1) << endl;
}