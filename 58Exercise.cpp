#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int a , b , d ;
  d=0;
  
  cout<<" a= ";
  cin>>a;
  
  cout<<" b= ";
  cin>>b;

  while (a>0 && b>0)
    {
      if (a>b)
        a-+b;
      else
        b-=a;
      d++;
    }
  cout<<d;
  system("PAUSE");
  return 0;
}
