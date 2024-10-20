#include <iostream>
#include "stdio.h"
#include "math.h"
#include <format>
#include <algorithm>
using namespace std;

int main(){
    int m , n ;
    cin >> m >> n;
    int cnt = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > m) cnt++;
        else m -= x;
    }

    cout << cnt << endl;
}