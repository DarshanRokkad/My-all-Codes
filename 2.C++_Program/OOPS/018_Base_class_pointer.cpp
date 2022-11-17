// Base class pointer derived class object 
#include<iostream> 
using namespace std;
class Base
{
    public:
    void fun1()
    {
        cout<<"Fun 1 of base"<<endl;
    }
};
class derived:public Base
{
    public:
    void fun2()
    {
        cout<<"Fun 2 of derived"<<endl;
    }
};
int main() 
{ 
    derived d ;
    d.fun1();
    d.fun2();
    // Base *ptr = &d;
    Base *ptr = new derived();
    ptr->fun1();
    // ptr->fun2(); // this belong to derived function so base class pointer can't call derived class fuction
  
    return 0 ;
}