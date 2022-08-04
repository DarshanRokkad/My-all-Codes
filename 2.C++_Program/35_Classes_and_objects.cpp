// Classes in C++ 
// They are like structure in c
#include<iostream>
using namespace std;
// here the data type is student
// This is only just a declaration memory is not allocated 
// Memory is allocated when defination is done it is done in main function
class student
{
    public:
    string name ;
    int age ;
    char grade;
    float cgpa;
};
// Here we can see the use of the sizeof operator in C++
int main()
{
    student s1 = {"Darshan",18,'A',9.2};
    // can also be declared as s1.name = "Darshan";
    // Accesing elements of the classes
    cout<<"Name : "<<s1.name<<endl;
    cout<<"The size of string is "<<sizeof(string)<<endl;
    // string takes 32 bytes 
    cout<<"\nAge : "<<s1.age<<endl;
    cout<<"The size of int is "<<sizeof(int)<<endl;
    // int takes 4 bytes
    cout<<"\nGrade : "<<s1.grade<<endl;
    cout<<"The size of char is "<<sizeof(char)<<endl;
    // char takes 1 byte 
    cout<<"\nCgpa : "<<s1.cgpa<<endl;
    cout<<"The size of float is "<<sizeof(float)<<endl;
    // float takes 4 bytes but double takes 8 bytes 
    cout<<"\nTotal : "; // 32+4+1+4=41 bytes but why it is 48 bytes i don't know
    cout<<sizeof(student)<<endl;
    // Total number of bytes the class student take 
    
    return 0 ;
}