#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;
    int sum = 0 ;
    int div3 = a / 3;
    sum += a % 3;
    a = div3;
    b += div3;
    e += div3;
    
    
    div3 = b / 3;
    sum += b % 3;
    b = div3;
    a += div3;
    c += div3;
    

    div3 = c / 3;
    sum += c % 3;
    c = div3;
    b += div3;
    d += div3;
    

    sum += d % 3;
    div3 = d / 3;
    d = div3;
    c += div3;
    e += div3;
    

    div3 = e / 3;
    sum += e % 3;
    e = div3;
    d += div3;
    a += div3;
    
    cout << a << ' ' << b << ' '<< c << ' '<< d << ' '<< e << endl;
    cout << sum << endl;
}