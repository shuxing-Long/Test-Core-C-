#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        int a, n1 = 1, n2 = 1;
        cin >> a;
        
        if(a < 3)
        {
            sum[i] = 1;
            continue;
        }

        for (int j = 3; j <= a; j++)
        {
            int s = n1 + n2;
            n1 = n2;
            n2 = s; 
            sum[i] = s;
        }
        
    }
    for(int n : sum){
        cout << n << endl;
    }
}