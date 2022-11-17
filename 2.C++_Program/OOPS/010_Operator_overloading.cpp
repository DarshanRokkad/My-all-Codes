// Opertor overloading in complex number
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
    void display()
    {
        cout<<real<<" + i "<<img<<endl;
    }
    // Complex add(Complex x) => function
    Complex operator+(Complex x) // => operator overloading
    {
        Complex res;
        res.real = real + x.real;
        res.img = img + x.img;
        return res;
    }
};
int main() 
{ 
    Complex c1(5,8);
    Complex c2(3,7);
    Complex c3;

    // c3 = c1.add(c2); // => funtion
    c3 = c1+c2; // => operator overloading
    c3.display();
  
    return 0 ;
}