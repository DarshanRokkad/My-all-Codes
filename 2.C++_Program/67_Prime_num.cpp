// To find wheather the number is prime or not 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int num , count = 0  ;
    cout<<"Enter the number to check whether it is prime or not : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<num<<" is prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number"<<endl;
    }
  
    return 0 ;
}