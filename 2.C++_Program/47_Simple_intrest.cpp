// To find the simple intrest 
#include<iostream>
using namespace std ;
int main()
{
    int p , t , r ;
    cout<<"Enter the principle amount , time and intrest : ";
    cin>>p>>t>>r;
    float si =(float) (p*t*r)/100;
    cout<<"The simple intrest is "<<si<<endl;

    return 0 ;
}