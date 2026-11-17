#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
    float a , b , c;
    
    cout<<"Vnesi tri broja:";
    cin>>a>>b>>c;
    
     if (a+b>c&&a+c>b&&b+c>a)
    cout<<"Moze da se formira triagolnik:" ;
         
     else
    cout<<" Ne moze da se formira triagolnik" ;
    
    system("PAUSE");
    return 0;
}
