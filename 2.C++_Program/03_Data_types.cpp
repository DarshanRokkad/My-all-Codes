// Variables 
#include<iostream>

using namespace std;
int main()
{
    string name="Tom" ;
    int age = 100;
    char grade ='A';
    float gpa = 8.9;
    double cgpa = 8.5;
    char ga[10]="harsha";
    bool ismale = true ; 
    cout<<"Name : "<< name<<endl;
    cout<<"He was "<<age<<" years old"<<endl;
    cout<<"He scored "<<grade<<" grade in puc "<<endl;
    cout<<"He has scored "<<gpa<<" cgpa in first year"<<endl;
    cout<<"He has scored "<<cgpa<<" cgpa in second year"<<endl;
    cout<<"He has a friend named "<<ga<<endl;
    cout<<"your name is "<<name<<endl;
    // cout<<7<<endl;
    // cout<<'A'<<endl;
    // cout<<9.8<<endl;

    // love baber bhai ka leature 2 se 
    cout<<(int)grade<<endl; // this is called type casting 
    cout<<(char)age<<endl;
    int spe = 'A';
    cout<<spe<<endl;
    cout<<(char)spe<<endl;
    char a = 123456;
    cout<<a<<endl;

    // Can modify the values 
    name = "Darshan";
    age = 19;
    cout<<"\nHe liked the name "<<name << endl;
    cout<<"But did not like being "<< age <<endl;

    cout<<"Size of int : "<<sizeof(int)<<endl;
    cout<<"Size of char : "<<sizeof(char)<<endl;
    cout<<"Size of float : "<<sizeof(float)<<endl;
    cout<<"Size of double : "<<sizeof(double)<<endl;
    cout<<"Size of bool : "<<sizeof(bool)<<endl;
    cout<<endl;
    unsigned int m = 1;
    cout<<m<<endl;
    // cout<<UNSIGNEDINT_MIN<<endl;
    unsigned int b = -1 ;
    cout<<b<<endl; 

    return 0 ;
}