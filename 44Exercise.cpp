#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int i , m , n , t , b;
  b=0;
    
  cout<<" Vnesi broj ! ";
  cin>>m;
  cout<<" Vnesi broj ! ";
  cin>>n;

  if (m>n)
  {
    t=m; m=n; n=t;
  }
    
  for (i=m; i<=n; i++)
    if (i%2==0)
      b = b+1;

  cout<<" Od "<<m<<" Do "<<n<<" ima ";
  cout<<b<<" parni broevi ";
  system ("PAUSE");
  return 0;
}
