// Taking input from the user 
#include<iostream>

using namespace std;
int main()
{
    int  age ;
    string name ;
    char grade;
    float cgpa ;

    cout <<"Enter your name : ";
    getline(cin,name); //Take full line 
    // cin>>name; //grabs only upto 1st space
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your grade : ";
    cin>>grade;
    cout<<"Enter your cgpa : ";
    cin>>cgpa;

    cout <<"\nyour name is "<<name <<endl;
    cout <<"you are "<<age<<" years old"<<endl;
    cout <<"you have scored "<<cgpa<<" in first year and scored "<<grade<<" grade in the same year"<<endl;

    return 0 ;
}