#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{ 
int den ;
cout<< " vnesi reden broj na denot: " ;
cin>>den;

if (den==1)
  cout<< " denes e ponedelnik ! " ;
  
else if (den==2)
  cout<< " denes e vtornik " ;
  
else if (den==3)
  cout<< " denes e sreda " ;
  
else if (den==4)
  cout<< " denes e cetvrtok " ;
  
else if (den==5)
  cout<< " denes e petok " ;
  
else if (den==6)
  cout<< " denes e sabota " ;
  
else if (den==7)
  cout<< " denes e nedela " ;

else
  cout<< " pogresen podatok " ;
system ( "PAUSE" ) ;
return 0;
}
