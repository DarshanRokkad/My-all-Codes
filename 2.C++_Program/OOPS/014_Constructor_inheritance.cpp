// constructor in inheritance
#include<iostream> 
using namespace std; 
class base
{
    public:
    base()
    {
        cout<<"default of base"<<endl;
    }
    base(int a)
    {
        cout<<"Parameterized base "<<a<<endl;
    }
};
class derived : public base
{
    public:
    derived()
    {
        cout<<"default of derived"<<endl;
    }
    derived(int a)
    {
        cout<<"Parameterized derived "<<a<<endl;
    }
    // constructor of base is executed first and then the below one 
    derived(int a , int x):base(x)
    {
        cout<<"Parameterized derived 2 : "<<a<<endl;
    }
};
int main() 
{ 
    derived b ;
    cout<<endl;
    derived d(7);
    cout<<endl;
    derived c(5,6);
  
    return 0 ;
}