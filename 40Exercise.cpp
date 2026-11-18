#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int broj , najgolem;
  cout<<" Vnesi Broj ! ";
  cin>>broj;
  do
    {
      cout<<" Vnesi broj ! ";
      cin>>broj;
      if (broj>najgolem)
        najgolem=broj;
    }
    while (broj !=0);
  cout<<"Najgolemiot broj e "<<najgolem;
  system("PAUSE");
  return 0;
}
