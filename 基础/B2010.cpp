#include <iostream>
using namespace std;
#include <format>
int main(){
    int a , b;
    cin >> a >> b;

    cout << format("{} {}\n",a/b,a%b);
}