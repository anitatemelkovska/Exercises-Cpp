#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{ 
    int a , b ;
float x;
cout<<" vnesi gi parametrite: "<<endl;
cout<<"a= ";
cin>>a;
cout<<"b= ";
cin>>b;

if (a==0)
{
  if (b==0)
    cout<<"ravenkata ima beskonecno resenija";
  else
    cout<<"ravenkata nema resenija";
}

else
{
  x= -(float)b/a;
  cout<<"resenieto e x="<<x;
}

system("PAUSE");
return 0;
}
