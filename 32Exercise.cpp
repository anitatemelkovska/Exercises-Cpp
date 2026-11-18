#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
  char Ocenka;
  cout<<" Vnesi Opisna Ocenka: " ;
  cin>>Ocenka;
  switch (Ocenka)
    {

      case 'A' :
      cout<<" Imas 5-ka ! " ;
      break;

      case 'B' :
      cout<<" Imas 4-ka ! " ;
      break;

      case 'C' :
      cout<<" Imas 3-ka ! " ;
      break;

      case 'D' :
      cout<<" Imas 2-ka ! " ;
      break;

      case 'F' :
      cout<<" Imas 1 ! " ;
      break;

      default:
      cout<<" Pogresen Podatok ! " ;
    }
  
  system("PAUSE");
  return 0; 
}
