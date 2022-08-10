// Power of the number 
#include<iostream> 
using namespace std;
int power(int a,int b)
{
    int result=1;
    for(int i =1 ;i<=b;i++)
    {
        result = result * a;
    }
    return result;
} 
int main() 
{ 
    int a, b ;
    cout<<"Enter the base number : ";
    cin>>a;
    cout<<"Enter power of the number : ";
    cin>>b;
    int ans = power(a,b);
    cout<<a<<" power "<<b<<" is "<<ans<<endl;
  
    return 0 ;
}