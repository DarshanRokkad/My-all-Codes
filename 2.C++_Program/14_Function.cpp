// Funtion dedclaration and definition 
#include<iostream>
using namespace std;
// Function to be declared before main function before using in main function
void dis(string , int );
int main()
{
    string name ;
    int age ; 
    cout<<"Enter your name : ";
    getline(cin,name) ; // this will take whole line entered by the user but in cin it take only upto first space 
    cout<<"Enter your age : ";
    cin>>age ;
    dis(name , age);

    return 0;
}
void dis(string name , int age )
{
    cout<<"Your name is "<<name<<endl;
    cout<<"Your age is "<<age<<endl;
}