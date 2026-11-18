#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n;
  for (n=100 ;n<=999 ;n++)
    if(n%10==0)
      cout<<n<<" , ";
  system("PAUSE");
  return 0;
}
