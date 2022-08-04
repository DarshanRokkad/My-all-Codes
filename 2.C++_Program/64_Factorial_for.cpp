// To find the factorial of a number 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int num , fact =1  ;
    cout<<"Enter the number you need factorial : ";
    cin>>num;
    for(int i =1 ; i<=num;i++)
    {
        fact= fact*i;
    }
    cout<<num<<" != "<<fact<<endl;
  
    return 0 ;
}