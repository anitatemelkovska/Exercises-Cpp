#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
    int a ;
    cout<<" vnesi cel broj: ";
    cin>>a;
    if (a%2==0)
      cout<<"brojot "<<a<<" e paren ";
    else 
    cout<<"brojot "<<a<<" e neparen";
    system("PAUSE");
    return 0;
}
