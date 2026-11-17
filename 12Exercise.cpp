#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int a,b;
  float sr_vred;
  cout<< "Vnesi dva celi broja:";
  cin>>a>>b;
  sr_vred = (a+b)/2.;
  cout<<"Sredna vrednost na"<<a;
  cout<<" i "<<b<<" e "<<sr_vred;
  system("PAUSE");
  return 0;
}
