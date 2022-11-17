// Funtion overriding in inheritance 
#include<iostream> 
using namespace std; 
class base 
{
    public:
    void display()
    {
        cout<<"Base class function"<<endl;
    }
};
class derived : public base 
{
    public:
    // overriding display function
    void display()
    {
        cout<<"Derived class function"<<endl;
    }
};
int main() 
{ 
    base b;
    b.display();
    derived d;
    d.display();
  
    return 0 ;
}