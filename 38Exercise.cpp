#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n , cifri;
  cout<<" Vnesi Broj ! ";
  cin>>n;
  cout<<" Brojot "<<n<<" ima ";
  cifri=0;
  while (n!=0)
    {
      n/=10;
      cifri++;
    }
  cout<<cifri<<" cifri ";
  system("PAUSE");
  return 0;
}
