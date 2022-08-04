// Mad lib 
#include<iostream>

using namespace std;
int main()
{
    string colour,noun,cel;
    cout<<"Enter the colour: ";
    getline(cin,colour);
    cout<<"Enter the noun: ";
    getline(cin,noun);
    cout<<"Enter the celibrity: ";
    getline(cin,cel);

    cout<<"\nRoses are "<<colour<<endl;
    cout<<noun<<" are blue"<<endl;
    cout<<"I love "<<cel<<endl;

    return 0 ;
}