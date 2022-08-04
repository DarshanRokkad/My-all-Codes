// Building better calculator
#include<iostream>
using namespace std;
int main()
{
    int a ,b ;
    char op;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"Enter operator : ";
    cin>>op;
    
    if(op=='+')
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    else if(op=='-')
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    else if(op=='*')
    cout<<"The Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    else if(op=='/')
    cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    else if(op=='%')
    cout<<"The remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
    else 
    cout<<"Invalid operator!"<<endl;

    return 0 ;
}