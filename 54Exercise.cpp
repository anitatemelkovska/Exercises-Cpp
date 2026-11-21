#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int cas;
  cout<<" cas= ";
  cin>>cas;

  if (cas ==0) cout<<" 12 AM ";
  if (cas ==12) cout<<" 12 PM ";
  if (cas >=1 && cas<=11) 
    cout<<cas<<" AM ";
  if(cas>=13 && cas<=23)
    cout<<cas-12<<" PM ";

  system( " PAUSE " );
  return 0;
}
