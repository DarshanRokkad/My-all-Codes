// use of function pointer
#include<iostream> 
using namespace std; 
int max(int a , int b )
{
    return (a>b)?a:b;
}
int main() 
{ 
    int (*fp)(int , int )= max;
    int c = fp(5,3);
    cout<<c<<endl;
  
    return 0 ;
}