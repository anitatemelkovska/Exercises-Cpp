#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int brojac , n;
  cout<<" Broj\tDelite\n ";
  cout<<"_____________________________";
  for (n=10; n<=100; n++)
    
    {
      cout<<"\n"<<n<<"\t";
      for (brojac=1; brojac<=n/2; brojac++)
        {
          if(n%brojac==0)
            cout<<brojac<<" , ";
        }
      cout<<n;
    }
  
  system("PAUSE");
  return 0;
  
}
