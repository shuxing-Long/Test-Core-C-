#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    //puts() 输出固定的内容
    if (n > 0) cout << puts("positive") << endl;
    else if (n == 0) cout << "zero" << endl;
    else cout << "negative" << endl;


}