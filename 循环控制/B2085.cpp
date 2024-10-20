#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for (int x = 2;; x++)
    {
        bool isPrime = true;
        for (int j = 2; j < sqrt(x); j ++){
            if(x % j  == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cnt ++;
            if(cnt == n){
                cout << x << endl;
                break;
            }
        }
        
    }
    
    
}