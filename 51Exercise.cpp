#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int n , b1000 , b500 , b100 , b50 , b10 ;
  cout<<" Kolku denari ? n= ";
  cin>>n;
  cout<<" Za "<<n<<" denari bankomatot ke isplati ";

  b500=n/500;
    n=n%500;

  b100=n/100;
    n=n%100;

  b50=n/50;
    n=n%50;

  b10=n/10;

  cout<<b1000+b500+b100+b50+b10<<" banknoti . ";
  system("PAUSE");
  return 0;
  
}
