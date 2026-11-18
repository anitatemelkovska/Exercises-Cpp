#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int i , n;
  float s;
  cout<<"n= ";
  cin>>n;
  s=0;
  i=1;
  
while (i<=n)
{
  s+=1./i;
  i++;
}
  
cout<<"s= "<<s;
system("PAUSE");
return 0;
}
