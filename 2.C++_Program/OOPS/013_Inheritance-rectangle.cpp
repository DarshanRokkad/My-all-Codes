// Cubiod by inheritance
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
// Inheritance
class cubiod : public rectangle
{
private:
    int height;

public:
    cubiod(int len = 0 ,int  bre = 0 ,int hei = 0)
    {
        setlength(len);
        setbreadth(bre);
        this->height = hei;
    }
    int volume()
    {
        return getlength()*getbreadth()*height;
    }    
};
int main()
{
    cubiod c(3,7,9);
    cout<<"Area : "<<c.area()<<endl;
    cout<<"Volume : "<<c.volume()<<endl;
    cout<<"Length : "<<c.getlength()<<endl;

    return 0;
}