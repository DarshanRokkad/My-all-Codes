// Some more funtion on the string class
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string name = "Welcome";
    string namen = "to you";
    char str[10];
    cout<<endl;
    cout<<"string str before : "<<str<<endl;
    name.copy(str,name.length());  // if you so another than you have to add null character at last
    cout<<"string str after : "<<str<<endl<<endl; 
    
    cout<<"string str before : "<<str<<endl;
    namen.copy(str,3);  // if you so another than you have to add null character at last
    str[4]='\0';
    cout<<"string str after : "<<str<<endl<<endl;  
  
    return 0 ;
}