#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
int i , n , p , poeni ;
int vkupno=0;
cout<<" n= ";
cin>>n;
for(i=1; i<=n; i++)
{
  cout<<" poeni= ";
  cin>>poeni;
  vkupno+=poeni;
}
cout<<" potrebni poeni ";
cin>>p;
if (vkupno>p)
  cout<<" da ";
else
  cout<<" ne ";
system( "PAUSE ");
return 0;
}
