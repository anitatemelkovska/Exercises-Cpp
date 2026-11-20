#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int x;
  
  cout<<" x= ";
  cin>>x;
  
  if (x%5!=0)
    cout<<x/5*5<<" "<<x/5*5+5;
    
  else
    cout<<x/5*5-5<<" "<<x/5*5+5;
  
  system("PAUSE");
  return 0;
}
