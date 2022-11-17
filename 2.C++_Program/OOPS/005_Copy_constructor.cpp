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
    rectangle(int l = 0, int b = 0)
    {
        setlength(l);
        setbreadth(b);
    }
    rectangle(rectangle &rect) // copy constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }
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
    rectangle r1(8, 9);
    rectangle r2(r1);

    cout << r2.area() << endl;
    cout << r2.getlength();

    return 0;
}