// String function  extended part 
#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string name = "How are you?";
    cout<<endl;
    cout<<"Finding are in the string : "<<name.find("are")<<endl;
    cout<<"Finding is in the string which is not present : "<<name.find("is")<<endl<<endl;
    
    cout<<"Finding the letter o using the function find : "<<name.find('o')<<endl;
    cout<<"Finding the letter o using the function rfind : "<<name.rfind('o')<<endl<<endl;

    cout<<"Finding the letter o using the function find_first_of : "<<name.find_first_of('o')<<endl;
    cout<<"Finding the letter o using the function find_last_of : "<<name.find_last_of('o')<<endl<<endl;

    cout<<"Extracting a part of a string : "<<name.substr(4,3)<<endl<<endl; // (index,how many to be exracted)

    string nam = "how are you?";
    cout<<"String compare: "<<nam.compare(name)<<endl; // same a strcmp
    cout<<"String compare: "<<name.compare(nam)<<endl<<endl;

    return 0 ;
}