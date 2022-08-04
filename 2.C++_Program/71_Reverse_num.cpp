// Reverse the given number 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int n , r , rev=0 ;
    cout<<"Enter the number : ";
    cin>>n;\
    int m =n;
    while(n>0)
    {
        r = n %10;
        n=n/10;
        rev = rev*10 + r ;
    }
    cout<<" The reverse of the number "<<m<<" is "<<rev<<endl;

    return 0 ;
}