#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  float broj;
  int i , bp , bn ;
  bp=bn=0;
    for (i=1;i<=10;i++)
    {
      cout<<" Vnesi broj ! ";
      cin>>broj;
      if (broj>0)
        bp = bp+1;
      if (broj<0)
        bn = bn+1;
    }
  if (bp==bn)
  {
    cout<<" Vnesen e ist broj na pozitivni ";
    cout<<" i na negativni broevi ";
  }
  else if (bp>bn)
    cout<<" ima poveke pozitivni broevi ";
  else
    cout<<" ima poveke negativni broevi ";
  system("PAUSE");
  return 0;
}
