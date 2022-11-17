// Rectangle using base class pointer derived class object 
// Do the same example with base car class and advance car class  
#include<iostream> 
using namespace std; 
class rectangle
{
    public:
    void area()
    {
        cout<<"Area of rectangle!"<<endl;
    }
};
class cuboid: public rectangle
{
    public:
    void volume()
    {
        cout<<"volume of cuboid"<<endl;
    }
};
int main() 
{ 
    cuboid c ;
    c.volume();
    rectangle* r = new cuboid();
    r->area();
    // r->volume();
  
    return 0 ;
}