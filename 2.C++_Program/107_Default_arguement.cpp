// default arguements
#include<iostream> 
using namespace std; 
int add(int a=0 ,int b=0 , int c=0)
{
    return a + b + c;
}
int main() 
{ 
    cout<<add()<<endl;
    cout<<add(5)<<endl;
    cout<<add(5,3)<<endl;
    cout<<add(6,3,8)<<endl;
      
    return 0 ;
}