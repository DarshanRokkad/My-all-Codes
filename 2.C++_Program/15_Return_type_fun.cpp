// return type funtion in c++ 
// finding cube of the number 
#include<iostream>
using namespace std;
int cube(int);
int main()
{
    int num ;
    cout<<"Enter the number you need cube : ";
    cin>>num;
    int result = cube(num); // we need a variable to store the value which is returned by the function 
    cout<<"Cube of "<<num<<" is "<<result<<endl;

    return 0 ;
}
int cube(int n)
{
    return n*n*n;
}