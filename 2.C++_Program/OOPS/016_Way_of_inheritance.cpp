// way of inheritance
#include<iostream> 
using namespace std; 

class parent 
{
    private : int a ;
    protected : int b;
    public : int c;
    void funparent()
    {
        a = 10 ;
        b = 15 ;
        c = 5 ;
    }
};

class child :  private parent // public parent 
{
    public :
    void funchild()
    {
        // a = 10 ;
        b = 70 ;
        c = 4 ;
    }
};

class grandchild : public child 
{
    public:
    void fungrandchild()
    {
        // a = 10 ;
        // b = 5 ; => private parent
        // c = 30 ; => private parent
    }
};

int main() 
{ 
    child c;
    // c.a = 20 ; => when public child
    // c.b = 5 ; => when public child
    // c.c = 2 ; => when protected child
  
    return 0 ;
}