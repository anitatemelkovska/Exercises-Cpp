#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n;
  cout<<" Vnesi Broj ! ";
  cin>>n;
  cout<<" Cifrite Na Brojot ";
  cout<<n<<" Nanazad se ";
  while (n>0)
    {
      cout<<n%10<<" , ";
      n/=10;
    }
  system("PAUSE");
  return 0;
}
