#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum[n + 1];
    sum[0] = 1.0;
    for (int i = 1; i <= n; i++)
    {
        double s = 1;
        
        int j = i;
        while (j)
        {
            s *= j--;
        }
        sum[i] = 1 / s;
    }

    double ss = 0;
    
    for (double c : sum)
    {
        ss += c;
        
    }
    cout.precision(10);
    cout << fixed;
    cout << ss << endl;
}