#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = false;
    }
    
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if((j+1) % (i+1) == 0){
                sum[j] = !sum[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(!sum[i]){
            if(i != 0) cout << ' ';
            cout << i + 1;
        }
    }
    cout << endl;
}