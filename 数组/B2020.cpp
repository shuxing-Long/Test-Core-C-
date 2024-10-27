#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int sum[5];
    cin >> sum[0] >> sum[1] >> sum[2] >> sum[3] >> sum[4];
    int c = 0;
    for(int i = 0; i < 5; i++){
        
        c += sum[i] % 3;
        sum[i] = sum[i] / 3;

        if(i != 0) sum[i - 1] += sum[i];
        else sum[4] += sum[i];

        if(i != 4) sum[i + 1] += sum[i];
        else sum[0] += sum[i];
    }
    cout << sum[0] << ' ' << sum[1] << ' ' << sum[2] << ' ' << sum[3]  << ' ' << sum[4] << endl;
    cout  <<  c << endl;
}