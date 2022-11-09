#include <iostream>
#include<String>
using namespace std;

int main()
{
    string name ;
    cout<<"Enter your name : "<<endl;
    getline(cin,name);
    string::iterator it ;
    for(it =name.end()-1;it!= name.begin()-1;it--)
    {
        cout<<*it;
    }

    return 0 ;
}
