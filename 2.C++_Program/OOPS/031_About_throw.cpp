// All aobut throw
#include<iostream> 
using namespace std; 

// class Myexcption: exception
// {

// };

// int division (int a ,int b)throw (...)
int division (int a ,int b)
{
    if(b==0)
    {
        throw 101;
        // throw string("div by 0");
        // throw Myexception();
    }
    return a/b;
}
int main() 
{ 
    int a = 43 , b = 10;
    try 
    {
        int c = division(a,b);
        cout<<c<<endl;
    }
    // catch(Myexcption e)
    catch(int e)
    {
        cout<<"Error "<<endl;
    }
  
    return 0 ;
}