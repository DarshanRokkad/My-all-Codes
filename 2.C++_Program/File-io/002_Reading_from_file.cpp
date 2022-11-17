// Reading a content from a file
#include<iostream> 
#include<fstream>
using namespace std; 
int main() 
{ 
    ifstream ifs("001My.txt");
    string name;
    int rool ;
    string lang;

    if(ifs)
    {
        cout<<"file is opened"<<endl;
    }
    ifs>>name>>rool>>lang;
    ifs.close();

    cout<<name<<endl;
    cout<<rool<<endl;
    cout<<lang<<endl;
  
    return 0 ;
}