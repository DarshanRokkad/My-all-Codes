// performing math operations in cpp is same as in c 
#include<iostream>
#include<cmath> // is like math.h in c
using namespace std;
int main()
{
    cout<<"2 to the power 4 : "<<pow(2,4)<<endl; // 2 to the power 4 = 16
    cout<<"square root of 64 : "<<sqrt(64)<<endl; // square root of 64 = 8
    cout<<"Round off of 5.5 : "<<round(5.5)<<endl; // it will round of to next number if in middle = 6
    cout<<"Round off of 5.1 : "<<round(5.1)<<endl;
    cout<<"Round off of 5.7 : "<<round(5.7)<<endl;
    cout<<"Ceiling of 5.2 : "<<ceil(5.2)<<endl; // ceiling means top = 6 
    cout<<"Floor of 5.9 : "<<floor(5.9)<<endl; // floor = 5
    cout<<"Minimum of 4 and 9 : "<<fmin(4,9)<<endl; // minimum of two numbers = 4
    cout<<"maximum of 4 and 9 : "<<fmax(4,9)<<endl; // maximum of two numbers = 9

    return 0 ;
}