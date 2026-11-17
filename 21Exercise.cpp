#include <iostream>
#include <cstdlib>
using namespace std ;
int main()
{
  float a , b , c , s ;
  cout<< " Vnesi tri broevi : " ;
  cin>>a>>b>>c;
  s=0;
  if (a>0) s=s+a;
  if (b>0) s=s+b;
  if (c>0) s=s+c;
  cout<<" s= "<<s;
  system("PAUSE");
  return 0;
}
