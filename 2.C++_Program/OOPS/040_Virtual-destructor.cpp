// virtual destructor 
#include<iostream> 
using namespace std; 
class base
{
    public :
    base()
    {
        cout<<"cons of base"<<endl;
    }
    // ~base()
    virtual ~base()
    {
        cout<<"des of base"<<endl;
    }
    
};
class derived:public base
{
    public :
    derived()
    {
        cout<<"cons of derived"<<endl;
    }
    ~derived()
    {
        cout<<"des of derived"<<endl;
    }
    
};
int main() 
{ 
    base *p = new derived();
    delete p ;
  
    return 0 ;
}