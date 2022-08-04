// Program to find the number is perfect or not 
// perfect number is one in which the sum of the factors is equal to the double the number  
#include<iostream> 
using namespace std; 
int main() 
{ 
    int num,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i =1 ;i<=num;i++)
    {
        if(num%i==0)
        {
            sum = sum + i ;
        }
    }
    if (sum==2*num)
    {
        cout<<num<<" is a perfect number"<<endl;
    }
    else 
    {
        cout<<num<<" is not a perfect number"<<endl;
    }
  
    return 0 ;
}