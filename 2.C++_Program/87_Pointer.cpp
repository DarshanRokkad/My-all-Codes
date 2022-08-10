// Pointer in c++
#include<iostream> 
using namespace std; 
int main() 
{ 
    int a = 2 ;
    int *p = &a ;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The value of p : "<<p<<endl;
    cout<<endl;
    cout<<"The address of a : "<<&a<<endl;
    cout<<"The address of p : "<<&p<<endl;
    cout<<endl;
    cout<<"The value of a : "<<*p<<endl;
  
    return 0 ;
}