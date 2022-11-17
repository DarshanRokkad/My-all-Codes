// get and set
#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    // mutators
    void setlength(int l)
    {
        if (l < 0)
        {
            cout << "You cannot have the negative length so it will be assigned as 0" << endl;
            length = 0;
        }
        else
        {
            length = l;
        }
    }
    void setbreadth(int b)
    {
        if (b < 0)
        {
            cout << "You cannot have the negative so it breadth will be assigned as 0" << endl;
            breadth = 0;
        }
        else
        {
            breadth = b;
        }
    }
    // accesors
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    // other methods
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return 2 * (length * breadth);
    }
};
int main()
{
    rectangle r;
    r.setlength(5);
    r.setbreadth(-8);
    cout << r.area() << endl;
    cout << r.getlength();

    return 0;
}