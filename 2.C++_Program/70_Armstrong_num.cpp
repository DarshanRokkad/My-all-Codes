// Checking the number is it armstrog or not 
// Armstrong number is one in which the sum of the cube of the digit is equal to digit 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() 
{ 
    int n ,r, sum =0 ;
    cout<<"Enter the number : ";
    cin>>n;
    int m = n ;
    while(n>0)
    {
        r = n % 10;
        n = n/10;
        sum = sum + pow(r,3);
    }
    if(sum==m)
    {
        cout<<m<<" is the armstrong number"<<endl;
    }
    else 
    {
        cout<<m<<" is not armstrong number"<<endl;
    }
  
    return 0 ;
}