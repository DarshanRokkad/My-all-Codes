// destructor 
#include<iostream> 
using namespace std; 
class demo 
{
    int *p;
    public :
    demo()
    {
        // as it is dynamically created we have to deallocate it manually
        p = new int[7];
        cout<<"Constructor is created"<<endl;
    }
    ~demo()
    {
        delete p;
        cout<<"Constructor is deleted"<<endl;
    }
};
int main() 
{ 
    // demo* d = new demo(); 
    // delete d;
    demo d ;
  
    return 0 ;
}