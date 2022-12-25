// Complex number
#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    complex operator+(complex c)
    {
        complex tem;
        tem.real = real + c.real;
        tem.imag = imag + c.imag;
        return tem;
    }
    complex operator+(int a)
    {
        real += a;
        return (*this);
    }
    friend ostream &operator<<(ostream &o, complex &c);
};
ostream &operator<<(ostream &o, complex &c)
{
    o << c.real << " + i" << c.imag << endl;
    return o ;
}

int main()
{
    complex c1(3,6);
    complex c2(7,2);
    cout<<c1;
    cout<<c2;
    complex c3 = c1 + c2 ;
    cout<<c3;
    complex c4 = c1 + 5 ;
    cout<<c4;

    return 0;
}