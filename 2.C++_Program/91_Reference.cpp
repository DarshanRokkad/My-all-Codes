// Refering in c++
// This one of the unique feature in c++
#include<iostream> 
using namespace std; 
int main() 
{ 
    int x = 29 ;
    int &y = x ;
    // here both the variable pointing to the same value i.e x=y=29
    x++;
    y++;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;
  
    return 0 ;
}