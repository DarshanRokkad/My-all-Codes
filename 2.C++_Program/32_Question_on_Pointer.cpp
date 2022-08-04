// Guess the output 
#include<iostream>
using namespace std;
int main()
{
    int a[]={5,1,6,8,3,10};
    int * p ;  
    p = a ;
    // Here flow of excution is not like in c programing as it move from  R->L 
    
    cout<<*(p++)<<" "<<++*p<<" ";
    cout<<*p;
    // output = 5 2 2 

    // cout<<*(p++)<<" "<<*p++<<" ";
    // cout<<*p;
    // output = 5 1 6

    // cout<<*p++<<" "<<*++p<<" ";
    // cout<<*p;
    // output = 5 6 6 

    return 0 ;
}