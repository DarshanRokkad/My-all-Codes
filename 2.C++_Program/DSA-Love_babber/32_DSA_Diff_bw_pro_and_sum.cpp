// Difference between product and sum of the digits of the numbers
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n;
    cin>>n ;
    int sum = 0 , pro = 1 ;
    while(n!=0)
    {
        int digit = n%10;
        sum = sum + digit ;
        pro = pro * digit ;
        n=n/10;
    }
    int dif = pro- sum ;
    cout<<dif;
  
    return 0 ;
}