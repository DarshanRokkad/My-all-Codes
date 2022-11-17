// Delegation of the constructor
#include<iostream> 
using namespace std; 
class test
{
    // Inclass initalizers 
    int a = 39 ;
    int b = 3 ;
    public :
    test(int a ,int b)
    {
        this->a= a ;
        this->b=b;
    }
    // delegation of constructor
    test():test(1,1)
    {}
};
int main() 
{     
  
    return 0 ;
}