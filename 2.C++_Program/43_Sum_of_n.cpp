// To find the sum of the n numbers 
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the nth number you need the sum : ";
    cin>>n;
    int sum = n * (n+1)/2;
    cout<<"Sum is "<<sum<<endl;

    return 0 ;
}