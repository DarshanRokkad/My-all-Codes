// to find the nature of the quadratic equation
#include<iostream> 
#include<cmath>
using namespace std; 
int main() 
{ 
    float a , b , c,r1,r2; 
    cout<<"Enter the value of a , b and c : ";
    cin>>a>>b>>c;
    float d = (b*b)-(4*a*c);
    if(d==0)
    {
        r1 = (-b)/(2*a);
        cout<<"Roots are real and equal"<<endl;
        cout<<"The root is "<<r1<<endl;
    }
    else
    {
        if(d<0)
        {
            cout<<"Imaginary roots"<<endl;
        }
        else 
        {
            r1 = ((-b)+sqrt(d))/(2*a);
            r2 = ((-b)-sqrt(d))/(2*a);
            cout<<"Roots are real and unequal"<<endl;
            cout<<"The roots is "<<r1<<" and "<<r2<<endl;
        }
    }
  
    return 0 ;
}
