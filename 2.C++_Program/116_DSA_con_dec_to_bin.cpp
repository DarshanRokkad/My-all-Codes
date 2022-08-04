// Convert decimal nubmer to binary 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int ans =0 , i =0  ;
    while(n!=0)
    {
        // first we are geting LSB then we will get MSB
        int bit= n%2; // can also use bit = n&1;
        ans =bit*pow(10,i)+ans ;
        n=n/2; // can also use n = n /10;
        i++;
    }
    cout<<ans;

    return 0 ;
}