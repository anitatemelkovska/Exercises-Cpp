#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
     int n , c1 , c3;
     cout<<"vnesi tricifren broj:";
     cin>>n;
     c3=n%10;
     c1=n/100;
      if (c1==c3)
        cout<<n<<" e palidrom ";
      else
        cout<<n<<" ne e palidrom";
     system("PAUSE");
     return 0;
}
