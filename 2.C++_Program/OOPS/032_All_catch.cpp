// try and catch using function
#include<iostream> 
using namespace std; 

// Base class => this catch should be at last
class Myexpection1 
{

};
// Derived class => this catch should be at first 
class Myexpection2
{

};

int main() 
{     
    try
    {
        // throw 5;
        throw 5.6f;
        // throw 'a';
    }  

    // Multiple exceptions 
    catch(int e)
    {
        cout<<"Integer catch"<<endl;
    }
    catch(float r)
    {
        cout<<"Float catch"<<endl;
    }
    // This is a catch all statement which can catch all the exceptions which should be at last always
    catch(...)
    {
        cout<<"Catch all catch"<<endl;
    }
      
    return 0 ;
}