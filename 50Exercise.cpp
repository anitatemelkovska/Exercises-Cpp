#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int c1 , c2 , c3 ; // nabrojuva
  
  cout<<" c1= "; // podatoci za prviot
  cin>>c1;

  cout<<" c2= "; // podatoci za vtoriot
  cin>>c2;

  cout<<" c3= "; // podatocite za tretiot
  cin>>c3;

  
  cout<<" Prviot patnik treba da plati "; // za prviot -----------> c1/3.
  cout<<c1/3.<<" Denari "<<endl;

  cout<<" Vtoriot patnik treba da plati "; // za vtoriot ---------> c1/3.+(c2-c1)/2.
  cout<<c1/3.+(c2-c1)/2.<<" Denari "<<endl;

  cout<<" Tretiot patnik treba da plati "; // za tretiot ---------> c1/3.+(c2-c1)/2.+c3-c2
  cout<<c1/3.+(c2-c1)/2.+c3-c2<<" Denari "<<endl;

  system("PAUSE");
  return 0;
}
