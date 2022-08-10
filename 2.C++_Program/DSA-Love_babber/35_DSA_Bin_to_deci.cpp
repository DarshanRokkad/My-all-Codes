// Convert the binary number into decimal 
#include<iostream> 
#include<cmath>
using namespace std; 
int main() 
{ 
    int n , i =0;
    cin>>n ; // only give 0 or 1 as input
    int num = 0 ;
    while(n!=0)
    {
        int dig = n%10;
        num = num + (dig * pow(2,i) );
        i++;
        n=n/10;
    }
    cout<<num<<endl;
  
    return 0 ;
}