// using abstract class to achieve polymorphism
#include <iostream>
using namespace std;
#define pie 3.14
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle(float len = 0, float bre = 0)
    {
        length = len;
        breadth = bre;
    }
    float area()
    {
        return (length * breadth);
    }
    float perimeter()
    {
        return (2 * (length * breadth));
    }
};
class circle : public shape
{
private:
    float radius;

public:
    circle(float radius = 0)
    {
        this->radius = radius;
    }
    float area()
    {
        return (pie * radius * radius);
    }
    float perimeter()
    {
        return (2 * pie * radius);
    }
};

int main()
{
    shape *ptr = new rectangle(3, 6);
    cout << "rectangle : " << endl;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
    ptr = new circle(5.4);
    cout << "circle : " << endl;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;

    return 0;
}