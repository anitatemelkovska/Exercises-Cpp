#include <iostream>
#include <cstdlib>
using namespace std ;
int main()
{
  float a , b , c , p ,n ;
cout<<"Vnesi tri broevi:";
cin>>a>>b>>c;
if (a>b)
  p=a;
else
  p=b;
if (p>c)
  n=p;
cout<<"Najgolemiot broj e"<<n;
system("PAUSE");
return 0;
}
