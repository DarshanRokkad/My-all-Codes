// To find the area of the circle
#include<iostream>
using namespace std;
int main()
{
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area = (float)3.14*radius*radius;
    cout<<"Area of the circle of radius "<<radius<<" is "<<area<<endl;

    return 0 ;
}