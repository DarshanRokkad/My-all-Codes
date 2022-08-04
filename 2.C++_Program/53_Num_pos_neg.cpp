// to check wheater the number is postive or negative
#include<iostream> 
using namespace std; 
int main() 
{ 
    int num;
    cout<<"Enter a integer : "<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<num<<" is negative number"<<endl;
    }
    else
    {
        cout<<num<<" is positive number"<<endl;
    }
  
    return 0 ;
}