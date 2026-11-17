#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  float a, P, L; 
  
  a = 8.5;
  P = a * a;
  L = 4 * a; // Пресметка за периметарот (квадрат)
  
  cout << "Plostina na kvadratot so stranata a = " << a;
  cout << " iznesuva " << P << endl;
  cout << " a negoviot perimetar e " << L << endl;
  
  system("PAUSE"); 
  return 0;
}
