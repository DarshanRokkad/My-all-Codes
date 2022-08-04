// String funtion 2 extended 
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string str = "How hey?";

    cout<<endl;
    cout<<str<<endl;
    cout<<str.replace(4,4,"are you?")<<endl<<endl; // (index , no of to be replaced , with what it should be replaced)

    str.push_back('H');
    cout<<"After push : "<<str<<endl<<endl;

    str.pop_back();
    cout<<"After pop  : "<<str<<endl<<endl;

    string str1 = " Darshan";
    cout<<"str before : "<<str<<endl;
    cout<<"str 1 before : "<<str1<<endl;
    str1.swap(str);
    cout<<"str After : "<<str<<endl;
    cout<<"str 1 After : "<<str1<<endl<<endl;

    str.erase();
    cout<<"str After erase : (print nothing) "<<str<<endl;
  
    return 0 ;
}