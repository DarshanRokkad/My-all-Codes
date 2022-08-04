// Finding nth term of the AP when equation is given
#include<iostream> 
using namespace std; 
int ap(int n)
{
    int an = 3*n+7;
    return an;
}
int main() 
{ 
    int n ;
    cin>>n;
    cout<<n<<"th term is "<<ap(n)<<endl;
  
    return 0 ;
}