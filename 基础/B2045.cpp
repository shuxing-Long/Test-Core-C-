#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    cout << (w % 2 && w != 7 ? "NO":"YES") << endl;
}