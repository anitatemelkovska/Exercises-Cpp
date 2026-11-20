#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int d, c1, c2, m, c;
  cout << " Dimenzija na sobata d : ";
  cin >> d;
  cout << " Dimenzii na masata c1 i c2 : ";
  cin >> c1 >> c2;
  cout << " Rastojanie od masata do zidovite : ";
  cin >> m;

  if (c1 > c2) c = c1;
  else c = c2;

  if (c <= d - 2 * m) 
    cout << " moze ";
  else
    cout << " ne moze ";

  system("PAUSE");
  return 0; 
}
