#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{ 
    int a;
cout<<"vnesi broj: " ;
cin>>a;

if (a>0)
{
  if (a%2==0)
    cout<<a<<" e pozitiven i e paren" ;
  else
    cout<<a<<" e pozitiven i e neparen" ;
}

else
  cout<<a<< " e negativen ";

system("PAUSE");
return 0;
}
