// To find the maximum of three numbers 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int a , b; 
    cout<<"Enter the Value of a and b : ";
    cin>>a>>b;
    if(a>=b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else 
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
  
    return 0 ;
}