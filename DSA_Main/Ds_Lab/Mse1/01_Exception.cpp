// perform operations on two operands and find the possible exception
#include<iostream> 
using namespace std; 

int add(int c,int d)
{
    return (c+d);
}
int sub(int c, int d)
{
    return (c-d);
}
int multi(int c ,int d)
{
    return (c*d); 
}
double divi(int c , int d)
{
    if(d==0)
    {
        throw ("zero division error");
    }
    double res = (c/d*1.0);
    return res;
}

int main() 
{ 
    int a , b ;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Addition of 2 numbers : "<<add(a,b)<<endl;
    cout<<"Subtraction of 2 numbers : "<<sub(a,b)<<endl;
    cout<<"Multiplication of 2 numbers : "<<multi(a,b)<<endl;
    double q ;
    try
    {
        q = divi(a,b);
    }
    catch(char const* e)
    {
        cout<<e<<endl;
        exit(0);
    }
    cout<<"Division of 2 numbers : "<<q<<endl;    
  
    return 0 ;
}