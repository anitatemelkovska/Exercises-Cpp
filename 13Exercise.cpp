#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n,a,b,c;
  cout<<" Vnesi tricifren broj: " ;
  cin>>n;
  a=n/100;
  b=n/10%10;
  c=n%10;
  cout<<" na brojot "<<n<<" prvata cifra e "<<a;
  cout<<" ,vtorata cifra e "<<b<< ", tretata cifra e "<<c;
  system ("PAUSE");
  return 0;
}
