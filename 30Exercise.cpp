#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
    int den ;
    cout<<" vnesi reden broj na denot:" ;
    cin>>den;

    switch (den)
{
  case 1:
  cout<< " Denes e Ponedelnik ! " ;
  break;

  case 2:
  cout<< " Denes e Vtornik ! " ;
  break;

  case 3:
  cout<< " Denes e Sreda ! " ;
  break;

  case 4:
  cout<< " Denes e Cetvrtok ! " ;
  break;

  case 5:
  cout<< " Denes e Petok ! " ;
  break;

  case 6:
  cout<< " Denes e Sabota ! " ;
  break;

  case 7:
  cout<< " Denes e Nedela ! " ;
  break;

  default:
  cout<< " Pogresen Podatok !!! " ;
}
system ( " PAUSE " ) ;
return 0;
}
