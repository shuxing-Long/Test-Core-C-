#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int a , b ,c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int x = 2;; x++)
    {
        if(a % x == b % x && b % x == c % x){
            cout << x << endl;
            break;
        }
    }

}