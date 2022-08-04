// call by reference
// Actual swaping of the number in main funtion also
#include<iostream>
using namespace std;
void swap(int* ,int*);
int main()
{
    int a , b ;
    a=5 , b =9 ;
    cout << "In main Before swapping Value of a is "<<a<<" and value of b is "<<b<<endl; 
    swap(&a,&b);   
    // Here address of a and b will be passed so number will be swaped using pointers  
    cout << "In main After  swapping Value of a is "<<a<<" and value of b is "<<b<<endl; 

    return 0 ;
}
void swap(int* a , int* b )
{
    int tem ;
    tem = *a ;
    *a= *b ;
    *b = tem ;
}