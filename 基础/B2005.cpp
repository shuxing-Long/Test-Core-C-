#include "stdio.h"
#include <iostream>
using namespace std;

#include <format>
int main(){
    char c;
    // scanf("%c", &c);
    // printf("  %c\n", c);
    // printf(" %c%c%c\n", c,c,c);
    // printf("%c%c%c%c%c\n", c,c,c,c,c);

     cin >> c;
    // cout << "  " << c << endl;
    // cout << " " << c << c << c << endl;
    // cout << c << c << c << c << c << endl;

    cout << format("  {}\n",c);
    cout << format(" {0}{0}{0}\n",c);
    cout << format("{0}{0}{0}{0}{0}\n",c);
}