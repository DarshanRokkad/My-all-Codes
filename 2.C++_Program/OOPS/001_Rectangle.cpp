// creating class and objects
#include <iostream>
using namespace std;

class rectangle
{
public:
    // data members
    int len;
    int bre;
    // member function
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
    // creating objects
    rectangle r1, r2;
    r1.len = 8, r1.bre = 80;
    r2.len = 5, r2.bre = 78;
    // calling member functions using the object name
    cout << "Area of the rectangle 1 : " << r1.area() << endl;
    cout << "Area of the rectangle 2 : " << r2.area() << endl;

    // pointer to an object
    rectangle *p;
    p = &r1;
    p->len = 85;
    p->bre = 3;
    cout << "Area of the rectangle 1 using pointers : " << p->area() << endl;

    return 0;
}