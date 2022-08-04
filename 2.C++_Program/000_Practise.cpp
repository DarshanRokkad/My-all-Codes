#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string name = "darshan rokkad";
    
    int len = name.length();
    cout<<len<<endl;
    name.clear();
    len = name.length();
    cout<<len<<endl;
    cout<<name.empty()<<endl;

    return 0 ;
}