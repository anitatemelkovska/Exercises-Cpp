#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  const float PI = 3.14 ;
  float r ;
  cout<<" Vnesi go radiusot: " ;
  cin>>r;
  cout<<" Plostina na krugot e "<<PI*r*r;
  cout<<" a negoviot perimetar e "<<2*PI*r<<endl;
  system("PAUSE");
  return 0;
}
