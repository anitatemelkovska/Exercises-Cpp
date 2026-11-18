#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int i , n , broj , bp , bn ;
  cout<<" Kolku broevi ke vneses ? " ;
  cin>>n;
  bp=bn=0;
  i=1;
  while (i<=n)
    {
      cout<<" Vnesi broj : " ;
      cin>>broj;
      if (broj>0)
        bp=bp+1;
      else
        bn=bn+1;
      i++;
    }
  cout<<" ima "<<bn<<" pozitivni ";
  cout<<" i "<<bn<<" negativni broevi ";
  system("PAUSE");
  return 0;
}
