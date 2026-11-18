#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
  int mesec;
  char Prestapna;
  cout<<"Vnesi reden broj na mesecot";
  cin>>mesec;
  switch (mesec)

    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
      cout<<" Mesecot ima 31 den ";
      break;

      case 4:
      case 6:
      case 9:
      case 11:
      cout<<" Mesecot ima 30 dena ";
      break;

      case 2:
      cout<<" Dali Godinata e Prestapna? (d/D) " ;
      cin>>Prestapna;
      if (Prestapna == 'd' || Prestapna == 'D')
        
        cout<<" Mesecot ima 29 Denovi" ;
      else
        cout<<" Mesecot ima 28 Denovi" ;
      break;
      
      default:
      cout<<" Pogresen Podatok! ";
    }
  
  system("PAUSE");
  return 0;
}








