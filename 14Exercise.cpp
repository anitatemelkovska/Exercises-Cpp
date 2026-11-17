#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
int sec , cas , min ;
cout<< "vnesi vreme vo sekundi : " ;
cin>>sec; 
cout<<sec<< " sekundi se " ;
cas=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;
cout<<cas<< " casovi , "<<min<<" minuti i " ;
cout<<sec<<" sekundi . "<<endl;
system("PAUSE");
return 0;
}
