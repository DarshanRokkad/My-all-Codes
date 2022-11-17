// Scope resolution operator
#include <iostream>
using namespace std;
// Class rectangle
class rectangle
{
private:
    int len;
    int bre;

public:
    rectangle(int, int);
    rectangle(rectangle &rect);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
};
// Definition of the method or memeber function
// Now these are not inline function so these is better.
rectangle::rectangle(int le = 0, int br = 0)
{
    setLength(le);
    setBreadth(br);
}
rectangle::rectangle(rectangle &rect)
{
    len = rect.len;
    bre = rect.bre;
}
void rectangle::setLength(int l)
{
    if (l < 0)
    {
        cout << "length cannot be negative" << endl;
        len = 1;
    }
    else
    {
        len = l;
    }
}
void rectangle::setBreadth(int b)
{
    if (b < 0)
    {
        cout << "length cannot be negative" << endl;
        bre = 1;
    }
    else
    {
        bre = b;
    }
}
int rectangle::getLength()
{
    return len;
}
int rectangle::getBreadth()
{
    return bre;
}
int rectangle::area()
{
    return len * bre;
}
int rectangle::perimeter()
{
    return 2 * (len + bre);
}
bool rectangle::isSquare()
{
    // can also do len == bre
    if (len * len == area())
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Main function
int main()
{
    rectangle r(3, 3);
    cout << r.getLength() << endl;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    cout << r.isSquare() << endl;

    return 0;
}