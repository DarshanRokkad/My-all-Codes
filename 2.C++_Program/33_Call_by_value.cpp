// call by value
// Swaping the number only in swap funtion
#include<iostream>
using namespace std;
void fun(int ,int);
int main()
{
    int a , b ;
    a=5 , b =9 ;
    cout << "In main Before swapping Value of a is "<<a<<" and value of b is "<<b<<endl; 
    fun(a,b);   
    // Here values of a and b will be copied so no change in values of a and b 
    cout << "In main After swapping Value of a is "<<a<<" and value of b is "<<b<<endl; 

    return 0 ;
}
void fun(int a , int b )
{
    int tem ;
    tem = a ;
    a= b ;
    b = tem ;
    cout << "In swap funtion after swapping Value of a is "<<a<<" and value of b is "<<b<<endl; 
}