// Smart pointer
#include<iostream> 
using namespace std; 
class rectangle
{
public:
    // data members
    int len;
    int bre;
    // member function
    rectangle(int a ,int b )
    {
        len = a ;
        bre = b;
    }
    int area()
    {
        return (len * bre);
    }
    int perimeter()
    {
        return 2 * (len * bre);
    }
};
int main() 
{ 
    // unique_ptr<rectangle> ptr(new rectangle(10,5));
  
    return 0 ;
}