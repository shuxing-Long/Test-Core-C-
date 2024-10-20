#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int a;
    int sum =0;
    cin >> a;
    if(a > 0){
        for(int i = 0; i < a;i++){
            int b;
            cin >> b;
            sum += b;
        }
    }
    cout.precision(5);
    cout << fixed;
    cout << sum << ' ' << sum * 1.0 / a;
}