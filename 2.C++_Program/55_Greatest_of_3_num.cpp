// find the maximum of 3 numbers  
#include<iostream> 
using namespace std; 
int main() 
{ 
    int a , b ,c ;
    cout<<"Enter the value of a , b and c : ";
    cin>>a>>b>>c;
    if(a>=b)
    {
        if(a>=c)
        {
            cout<<a<<" is greater"<<endl;
        }
        else 
        {
            cout<<c<<" is greater"<<endl;
        }
    }
    else 
    {
        if(b>=c)
        {
            cout<<b<<" is greater"<<endl;
        }
        else 
        {
            cout<<c<<" is greater"<<endl;
        }
    }
  
    return 0 ;
}