// Abstract class are one which have virtual function
#include<iostream> 
using namespace std; 
// This is a abstract class which is virtual not a real one  and do not exhist
class car
{
    public :
    virtual void start() = 0 ;
    // => Pure Virtual function
    // here the polymorphism is compulsary 
    // if polymorphism is not done means the derived class is also a abstact class
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
    car* c = new innova();
    c->start();

    c =  new swift();
    c->start();
    // here runtime polymorphism is achived by overriding the virtual start funtion
  
    return 0 ;
}