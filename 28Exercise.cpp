#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
    float a, b, c;
    cout << "vnesi tri broja: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && a == c)
        {
            cout << "triagolnikot e ramnostran";
        }
        else
        {
            
            if ((a == b) || (a == c) || (b == c))
            {
                cout << "triagolnikot e ramnokrak";
            }
            else
            {
                cout << "triagolnikot e raznostran"; 
            }
        }
    }
    else
    {
        cout << "ne moze da se formira triagolnik";
    }

    system("PAUSE");
    return 0; 
}
