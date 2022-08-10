// Pointer arithematic in c++
#include<iostream> 
using namespace std; 
int main() 
{ 
    int a[]={3,5,8,2,1};
    int *p = a , *q =&a[3];
    p++;
    cout<<*p<<endl;
    p--;
    cout<<*p<<endl;
    p+=2;
    cout<<*p<<endl;
    int d = p-q ;
    cout<<d<<endl;
    d =q-p;
    cout<<d<<endl;
  
    return 0 ;
}