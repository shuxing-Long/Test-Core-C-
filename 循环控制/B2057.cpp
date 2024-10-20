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
            sum = sum > b ? sum : b;
        }
    }

    cout << sum << endl;
}