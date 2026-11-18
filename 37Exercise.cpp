#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int i , broj , b , s ;
  b=s=0;
  i=1;
  while (s<100)
    {
      cout<<" Vnesi broj : ";
      cin>>broj;
      s+=broj;
      b++;
    }
  cout<<" Vneseni se "<<b<<" broevi ";
  system("PAUSE");
  return 0;
}
