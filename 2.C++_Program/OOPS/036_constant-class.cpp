// constant inside a class
#include<iostream> 
using namespace std; 
class demo 
{
    public:
    int x = 20 ;
    void display() const
    {
        // x++; // => cannot modify the data members when the function is constant
        cout<<x<<endl;
    }
};
int main() 
{ 
    demo d ;
    d.display();
  
    return 0 ;
}