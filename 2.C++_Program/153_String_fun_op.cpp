// String function operator 
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string s = "holiday";
    cout<<endl;

    cout<<"finding the character at some index : "<<s.at(4)<<endl<<endl;\

    cout<<"front : "<<s.front()<<endl;
    cout<<"back : "<<s.back()<<endl<<endl;

    s[4] = 'M';
    cout<<s<<endl;
    cout<<s[3]<<endl<<endl;

    string str1 = "Hi";
    string str2 = " bhaiya";

    str1 = str1 + str2;
    cout<<str1<<endl<<endl;

    str1 = str2 ;
    cout<<str1<<endl;
    cout<<str2<<endl<<endl;
  
    return 0 ;
}