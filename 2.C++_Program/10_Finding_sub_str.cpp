// Finding the substring from where it starts 
#include<iostream>
using namespace std;
int main()
{
    string name ="Jayanthi khatri lamba";
    cout<<name.find("lamba",5)<<endl;
    // find the substring khatri and from where the control should start to search like here form 5th index
    // cout<<name.find("rokkad",4)<<endl; prints garbage value

    return 0 ;
}