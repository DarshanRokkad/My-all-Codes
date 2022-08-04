// Factorial of a number using recusive function 
// 5! = 5x4x3x2x1 =120
// 5! = 5x4! = 5x4x3! = 5x4x3x2! = 5x4x3x2x1! = 5x4x3x2x1 =120 (recursion) 
#include<iostream>
using namespace std;
int fac(int );
int main()
{
    int num ; 
    cout<<"Enter the number you need factorial : ";
    cin>>num;
    int result = fac(num);
    cout<<num<<"! = "<<result<<endl;

    return 0 ;
}
int fac(int n)
{
    if(n==0)
    return 1;
    else
    return n*fac(n-1);
}