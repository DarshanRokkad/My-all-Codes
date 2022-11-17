// get and set
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // constructors
    rectangle(int length = 0, int breadth = 0)
    {
        // cout<<this->length<<endl;
        this->length = length ;
        this->breadth = breadth ;
        // cout<<this->length<<endl;
    }   
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    } 
};
int main()
{
    rectangle r(8, 9);
    cout<<r.getlength();

    return 0;
}