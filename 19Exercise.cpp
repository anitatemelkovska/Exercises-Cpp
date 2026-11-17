#include <iostream>
#include <cstdlib>
using namespace std ;
int main ()
{ 
int a , b ;
cout<< " Vnesi go namalenikot : " ;
cin>>a;
cout<< " Vnesi go namalitelot : " ;
cin>>b;
if ( a >= b )
  cout<<a<<" - "<<b<<" = "<<a-b ;
else 
cout<< " Razlikata "<<a<<" - "<<b<<" ne postoi vo N " ;
system ( " PAUSE " ) ;
return 0 ;
}
