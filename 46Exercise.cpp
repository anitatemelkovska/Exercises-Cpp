#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
  int broj , s , brojac , n ;
  brojac=s=0;
    for (n=1; n<=10; n++)
    {
      cout<<" Vnesi broj ";
      cin>>broj;
      if (broj<0)
      {
        cout<<" Vnesen e negativen broj!\n ";
        break;
      }
      s+=broj;
      brojac++;
    }
  cout<<" Vneseni se "<<brojac;
  cout<<" broevi , nivniot zbir e "<<s;
  system("PAUSE");
  return 0;
}
