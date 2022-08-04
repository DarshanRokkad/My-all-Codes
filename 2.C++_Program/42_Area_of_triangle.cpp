// program to find the area of the triangle 
#include<iostream>
using namespace std;
int main()
{
    int bre , hei;
    cout<<"Enter the breadth and height of the triangle : ";
    cin>>bre>>hei;
    int area = (bre * hei)/2;
    cout<<"Area of triangle of breadth "<<bre<<" and height "<<hei<<" is "<<area<<endl;

    return 0 ;
}