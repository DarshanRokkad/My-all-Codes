// Check wheather the number is palindrome are not 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , rev=0, r ;
    cout<<"Enter the number : ";
    cin>>n;
    int m = n ;
    while(n>0)
    {
        r = n%10;
        n=n/10;
        rev = rev*10 + r;
    }
    if(rev == m )
    {
        cout<<m<<" is a palidrome"<<endl;
    }
    else 
    {
        cout<<m<<" is not a palindrome"<<endl;
    }
  
    return 0 ;
}