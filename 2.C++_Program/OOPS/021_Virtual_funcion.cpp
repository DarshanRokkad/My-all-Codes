// Funtion overriding in inheritance 
// real world example for virtual funcution
#include<iostream> 
using namespace std; 
class basecar
{
    public:
    virtual void start() // if made virtual then the derived class function is called 
    {
        cout<<"Base car start"<<endl;
    }
};
class advancecar : public basecar 
{
    public:
    // overriding display function
    void start()
    {
        cout<<"Advance car start"<<endl;
    }
};
int main() 
{ 
    // base class pointer pointing to derived class object 
    basecar *ptr = new advancecar();
    ptr->start();
  
    return 0 ;
}