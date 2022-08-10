// String class
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string name ;

    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Your name is "<<name<<endl<<endl;

    cout<<"Enter your name: ";
    // cin>>name;
    // cout<<name<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
  
    return 0 ;
}