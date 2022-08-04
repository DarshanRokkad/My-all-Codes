// printinf the sub string of the string 
#include<iostream>
using namespace std;
int main()
{
    string name = "Sinchana rokkad";
    cout<<name.substr(9,6);
    // (from which index to start printing the sub string) , (how many character should it grab )
    // here it will grab rokkad

    return 0 ;
}