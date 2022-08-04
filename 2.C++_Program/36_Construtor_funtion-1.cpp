// Constructor function in C++
#include<iostream>
using namespace std;
class student
{
    public:
    string name ;
    int age ;
    student(string name) //This is now a construtor function 
    {
        // This will be excuted when ever the classes are defined or when created a varible of this classes
        cout<<"Creating Objects "<<name<<endl;
    }
};

int main()
{
    //When ever the classes are defined that constructor will display the the text
    student s1("Amogha");
    student s2("Darshan");
    s1.name="jenny";
    cout<<s1.name<<endl;

    return 0 ;
}