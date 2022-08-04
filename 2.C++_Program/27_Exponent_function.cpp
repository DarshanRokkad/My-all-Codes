// Here funtion do the work of pow inbuilt function 
// concept of for loops  
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
    int re=1;
    for(int i=0;i<p;i++)
    re = re * base ; 
    return re;
}