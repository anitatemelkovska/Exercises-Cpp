#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int m , n , a ;
  cout<<" m= ";
  cin>>m;
  cout<<" n= ";
  cin>>n;
  a=m+n;

  while (m!=n)
    {
      if (m>n)
        m-=n;
      else
        n-=m;
    }
  cout<<a/m;
  system("PAUSE");
  return 0;
}
