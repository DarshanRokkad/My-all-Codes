// Ellipsis
#include<iostream> 
using namespace std; 
int sum(int n , ...)
{
    va_list list;
    _crt_va_start(list,n);

    int x;
    int s = 0 ;
    for(int i = 0 ;i<n;i++)
    {
        x=_crt_va_arg(list,int);
        s+=x;
    }
    return s;
};
int main() 
{ 
    cout<<sum(4,2,6,3,5);  
  
    return 0 ;
}