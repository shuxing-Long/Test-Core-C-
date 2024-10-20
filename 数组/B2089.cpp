#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum[n];
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> sum[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(i != 0) cout << ' ';
        cout << sum[i];
    }
}