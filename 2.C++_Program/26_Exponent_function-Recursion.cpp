// Here funtion do the work of pow inbuilt function 
// concept of recursion 
#include<iostream>
using namespace std ;
int power(int ,int );
int main()
{
    int num , po;
    cout<<"Enter the base number : ";
    cin>>num ;
    cout<<"Enter the power : ";
    cin>>po;
    int result = power(num,po);
    cout<<num<<" ^ "<<po<<" = "<<result<<endl;

    return 0 ;
}
int power(int base , int p )
{
    if(p==0)
    return 1 ;
    else 
    return base*power(base,p-1);
}