// Implementing the polymorphism in the car 
// The same method in java is called as dynamic method dispatch
#include<iostream> 
using namespace std; 
class car
{
    public :
    // virtual void start() = 0 ; // => Pure Virtual function
    virtual void start()
    {
        cout<<"Car started"<<endl;
    }
};
class innova : public car
{
    public :
    void start()
    {
        cout<<"Innova started"<<endl;
    }
};
class swift : public car
{
    public :
    void start()
    {
        cout<<"Swift started"<<endl;
    }
};
int main() 
{ 
    // base class pointer having the dervied class object
    car* c = new innova();
    c->start();

    c =  new swift();
    c->start();
    // here runtime polymorphism is achived by overriding the virtual start funtion
  
    return 0 ;
}