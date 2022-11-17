// scope resoultion operator
#include<iostream> 
using namespace std; 
int x = 89;
int main() 
{ 
    int x = 19 ;
    cout<<x<<endl;
    ::x=56;
    cout<<::x<<endl; // referance to glabal varible
  
    return 0 ;
}