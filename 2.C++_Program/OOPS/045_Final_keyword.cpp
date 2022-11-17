// Final keyword 
#include<iostream> 
using namespace std; 
class parent
{
    public:
    virtual void fun() final
    {}
};
class der:public parent
{
    public:
    // void fun() //=> overriding is not possible
    // {}
};
int main() 
{ 
    
  
    return 0 ;
}