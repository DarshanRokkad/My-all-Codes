#include<iostream>
using namespace std ;
int main()
{
    string name ;
    cout<<"Enter your name : ";
    cin>>name;
    // getline(cin,name);
    // but here it will take only take upto first space only
    // but to avoid this we will take we use getline(cin,name);
    cout<<"Welcome "<<name<<endl;

    return 0 ;
}