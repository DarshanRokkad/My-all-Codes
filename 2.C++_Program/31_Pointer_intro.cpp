// Pointer in c++ and declaration of pointer and accesing value of the variable using poinnter 
#include<iostream>
using namespace std;
int main()
{
    int a = 5 ;
    int * ptr = &a  ;  
    string name = "darshan rokkad";
    string *p = &name ;

    // printing the value at a using a and pointer 
    cout<<"1. Value at a : "<<a<<endl;
    cout<<"2. Value at a : "<<*&a<<endl;
    cout<<"3. Value at a : "<<*ptr<<endl;
    // printing the address of a using a and pointer 
    cout<<"1. Address of a : "<<&a<<endl;
    cout<<"2. Address of a : "<<ptr<<endl;
    // printing the address of pointer
    cout<<"Address of ptr : "<<&ptr<<endl;

    // printing strings using name and pointer 
    cout<<"\n1. Name is "<<name<<endl;
    cout<<"2. Name is "<<*&name<<endl;
    cout<<"3. Name is "<<*p<<endl;
    // stirng pointer will store the base address of the string 
    cout<<"1. Address of string : "<<&name<<endl;
    cout<<"2. Address of string : "<<p<<endl;
    cout<<"Address of the first element of the string : "<<&name[0]<<endl;
    // Here it will not print the address of the 2 index of the string 
    // it will print the string starting from the index 2 i.e rshan rokkad 
    cout<<"Address of the second element of the string : "<<&name[2]<<endl;

    return 0 ;
}