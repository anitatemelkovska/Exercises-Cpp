#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  char ocenka;
  cout<<" vasata opisna ocenka: ";
  cin>>ocenka;

  if (ocenka== 'A')
    cout<<" imas 5 ! " ;

  else if (ocenka== 'B')
    cout<<" imas 4 ! " ;

  else if (ocenka== 'C')
    cout<<" imas 3 ! " ;

  else if (ocenka== 'D')
    cout<<" imas 2 ! " ;

  else if (ocenka== 'F')
    cout<<" imas 1 ! " ;

  else
    cout<<" Pogresen podatok ";

  system("PAUSE");
  return 0;
}
