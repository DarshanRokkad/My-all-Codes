// If else statements
#include<iostream>
using namespace std;
int main()
{
    bool ismale = false ; // here in c++ boolean is a data type which store true/false in it 
    bool tall = true;
    // Here we are using arthematic operator and , or and not oprator 
    if(ismale&&tall)
    cout<<"You are tall Male"<<endl;
    else if (ismale&&!tall)
    cout<<"You are short Male"<<endl;
    else if (!ismale&&tall)
    cout<<"Youe are tall female"<<endl;
    else 
    cout<<"You are short female"<<endl;

    return 0 ;
}