#include <iostream>
using namespace std;

int main()
{
  int i, n, l;
  int vkupno = 0;

  cout << "n = ";
  cin >> n;

  for (i = 1; i <= n; i++)
  {
    cout << "l = ";
    cin >> l;

    if (l % 4 == 0)
      vkupno += l / 4;
    else
      vkupno += (l / 4 + 1);
  }

  cout << "vkupno = " << vkupno << endl;

  return 0;
  
}
