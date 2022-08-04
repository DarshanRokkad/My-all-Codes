// To print the table of a number 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int num;
    cout<<"Enter the number you need a table  : ";
    cin>>num;
    for(int i =1 ;i<11;i++)
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
  
    return 0 ;
}