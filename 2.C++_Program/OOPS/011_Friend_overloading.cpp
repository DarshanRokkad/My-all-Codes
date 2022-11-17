// Operator overloading using friend funtion
#include<iostream> 
using namespace std; 
class Complex
{
    private:
    int real ;
    int img ;
    public:
    Complex(int r=0 , int i=0)
    {
        real = r;
        img = i;
    }
    // void display()
    // {
    //     cout<<real<<" + i "<<img<<endl;
    // }
    // insertion operator overloading
    friend ostream &operator<<(ostream &o , Complex &c);
    friend Complex operator+(Complex x, Complex y);
    
};
ostream & operator<<(ostream &o , Complex &c)
{
    o<<c.real<<" + i "<<c.img;
    return o;
}
Complex operator+(Complex x,Complex y)
{
        Complex res;
        res.real = y.real + x.real;
        res.img = y.img + x.img;
        return res;
}
int main() 
{ 
    Complex c1(5,8);
    Complex c2(3,7);
    Complex c3;

    c3 = c1+c2; // => operator overloading using friend function
    // c3.display();    
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl; // or operator<<(cout,c3);
     
    return 0 ;
}