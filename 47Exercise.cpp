#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
  int n , i ;
  cout<<" Vnesi n: ";
  vnes: cin>>n;

  if (n<1)
  {
    cout<<" Vnesi broj pogolem od 1 ";
    goto vnes;
  }
  for (i=1; i<=n; i++)
    cout<<i<<" , ";

  system("PAUSE");
  return 0;
  
}
