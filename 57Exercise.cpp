#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n , p ;
  p=0;
  cout<<" n= ";
  cin>>n;
  while (n>0)
    {
      p=p*10+n%10;
      n=n/10
    }
  cout<<p;
  system ( " PAUSE " );
  return 0;
}
