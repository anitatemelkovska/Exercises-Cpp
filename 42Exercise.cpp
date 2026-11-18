#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  float x , stepen;
  int i , n ;
  cout<<"Vnesi gi x i n ";
  cin>>x>>n;
  stepen=1;
  for ( i=1 ; i<=n ; i++ )
    stepen = stepen * x;
  cout<<stepen<<endl;
  system("PAUSE");
  return 0;
}
