#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float a, b, c, t;
    cout << "Vnesi tri broja: ";
    cin >> a >> b >> c;
    
    if (a > b) {
        t = a; a = b; b = t;
    }
    
    if (a > c) {
        t = a; a = c; c = t;
    } 
    
    if (b > c) {
        t = b; b = c; c = t;
    } 
    
    cout << a << " , " << b << " , " << c << endl;
    
    system("PAUSE");
    return 0;
}
