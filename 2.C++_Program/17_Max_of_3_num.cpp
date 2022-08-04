// Maximum of 3 numbers 
// Using the concept of the if else and function
#include<iostream>
using namespace std;
int max(int ,int ,int);
int main()
{
    int a,b,c;
    cout<<"Enter 3 number to find the maximum numuber : ";
    cin>>a>>b>>c;
    int result = max(a,b,c);
    cout<<"Maximim number of "<<a<<" "<<b<<" "<<c<<" is "<<result<<endl;

    return 0 ;
}
int max(int a , int b , int c )
{
    if(a>=b&&a>=c)
    return a ;
    else if(b>=a&&b>=c)
    return b;
    else 
    return c;
}