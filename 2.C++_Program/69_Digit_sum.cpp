// finding the digit sum 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int  n , r , sum =0 , m ;
    cout<<"Enter the number : ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r = n%10;
        n=n/10;
        sum = sum + r ;
    }
    cout<<"The sum if the digit "<<m<<" is "<<sum<<endl;
  
    return 0 ;
}