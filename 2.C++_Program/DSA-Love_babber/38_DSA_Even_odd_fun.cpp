// write a function to the number is even or odd
#include<iostream> 
using namespace std; 
bool isEven(int n)
{
    if(n%2==0)
    {
        return 1; 
    }
    else 
    {
        return 0 ;
    }
}
int main() 
{ 
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    if(isEven(n))
    {
        cout<<n<<" is a even number"<<endl;
    }
    else
    {
        cout<<n<<" is a odd number"<<endl;
    }
  
    return 0 ;
}