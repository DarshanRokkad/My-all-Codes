// calculting number of set bits in two numbers
#include<iostream> 
#include<cmath>
using namespace std; 
int count(int a , int b )
{
    int ans = 0 ;
    while(a!=0)
    {
        if(a&1)
        {
            ans++;
        }
        a=a>>1;
    }
    while(b!=0)
    {
        if(b&1)
        {
            ans++;
        }
        b=b>>1;
    }

    return ans ;
}
int main() 
{ 
    int a , b ;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int num = count(a,b);
    cout<<"Total Number of 1 set bits in "<<a<<" and "<<b<<" is "<<num<<endl;
  
    return 0 ;
}