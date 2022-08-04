// Constructor function in C++
#include<iostream>
using namespace std;
class student
{
    public:
    string name ;
    int age ;
    student()
    {
        name = "No name";
        age = 0 ;
    }
    student(string a, int b) //This is now a construtor function - it is used construt that own class by excepting the values from main funtion
    {
        // here we are intialising the object instead in main funtion but we are passing the values of the objects from the main function
        name = a ;
        age = b;
    }
};

int main()
{
    // When ever the classes are defined that constructor will intialize the values
    // we send the intial values to the classes to intialise the class values
    student s1("Darshan",18),s2("Sinchana",16) , s3;
    cout<<"Name : "<<s1.name<<", age : "<<s1.age<<endl;
    cout<<"Name : "<<s2.name<<", age : "<<s2.age<<endl;
    // Here we have not passed any arguements so if we wrote any default contrutor funtion in class it will assign that value
    cout<<"Name : "<<s3.name<<", age : "<<s3.age<<endl;

    return 0 ;
}