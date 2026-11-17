#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  float cena , kolicina , iznos , kusur ;
  cout<< "cena: ";
  cin>>cena;
  cout<<" kolicina: ";
  cin>>kolicina;
  cout<<" iznos: ";
  cin>>iznos;
  kusur=iznos-cena*kolicina;
  cout<<" kusur: "<<kusur<<endl;
  system("PAUSE");
  return (0);
}
