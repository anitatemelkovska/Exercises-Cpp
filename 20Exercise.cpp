#include <iostream>
#include <cstdlib>
using namespace std ;
int main()
{
  float a ;
  cout<< " Vnesi eden broj : " ;
  cin>> a ;
  cout<< " Apsolutnata vrednost " ;
  cout<< " na brojt "<<a<<" e " ;
  if (a>=0)
    cout<<a;
  else
    cout<<-a;
  system ("PAUSE");
  return 0;
}
