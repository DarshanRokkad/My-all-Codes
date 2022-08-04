// Some more string function in c++
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string str ="Hello ";
    string str2 = "world i am alien world?";

    cout<<endl;
    cout<<"String before append : "<<str<<endl;
    cout<<"String size before append : "<<str.size()<<endl;
    cout<<"String capacity before append : "<<str.capacity()<<endl<<endl;

    cout<<"String after append : "<<str.append(str2)<<endl;
    cout<<"String size after append : "<<str.size()<<endl;
    cout<<"String capacity after append : "<<str.capacity()<<endl<<endl;

    string wor = "!! WORLD !! ";
    cout<<"Before insert : "<<str<<endl;
    str.insert(6,wor); // we can also overload this funtion 
    cout<<"After insert : "<<str<<endl;
    cout<<"String capacity after append : "<<str.capacity()<<endl<<endl;

    return 0 ;
}