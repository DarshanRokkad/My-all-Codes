// try and catch using function
#include<iostream> 
using namespace std; 
int division(int a , int b)
{
    if(b==0)
    {
        throw 101;
    }
    return a/b;
}
int main() 
{ 
    int x = 8 , y = 0 ;
    try
    {
        int c = division(x,y);
        cout<<c;
    }    
    catch(int e)
    {
        cout<<"Error "<<e<<endl;
    }
  
    return 0 ;
}