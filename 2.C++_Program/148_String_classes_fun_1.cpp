// String classses function 
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Hello";

    cout<<endl;

    cout<<"Checking that string is empty or not : "<<str.empty()<<endl<<endl; // return 1 if string is empty

    cout<<"String length : "<<str.length()<<endl<<endl;

    cout<<"String size : "<<str.size()<<endl<<endl; // same funtion as string length 

    cout<<"String capacity : "<<str.capacity()<<endl<<endl; // always greater than or equal to sting length

    str.resize(50);
    cout<<"String resized to 50 so size and capacity is "<<str.size()<<" and "<<str.capacity()<<endl<<endl;

    cout<<"Maximum size : "<<str.max_size()<<endl<<endl;

    str.clear();
    cout<<"String cleared : (nothing will be printed)"<<str<<endl<<endl;

    cout<<"Checking that string is empty or not : "<<str.empty()<<endl<<endl; // return 1 if string is empty
  
    return 0 ;
}