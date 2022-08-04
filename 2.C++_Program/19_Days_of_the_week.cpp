// Find the days of the week using switch in function according to the integer entered by the user
#include<iostream>
using namespace std;
string days(int );
int main()
{
    int n;
    cout<<"Enter the number in between 1 to 7 : ";
    cin>>n;
    string name = days(n); // Here need string type of variable to store the string returned by the funtion 

    // Note:
    // V.imp =  In C++ we can compare two strings using == which is not possible in c language 
    // we can compare character array i.e strings in c like if ("darshan" =="darshan") 
    // but we cant compare string variable with string in c 
    // because in c string variable is storing the base address of the string it is a internal pointer we cant do this if (name=="darshan") 

    // it ask until user
    while(name=="Invalid input!")   
    {
            cout<<"\nPlease enter the valid input!"<<endl;
            cout<<"Enter the number in between 1 to 7 : ";
            cin>>n;
            name = days(n);
    }
    cout<<"The day is "<<name<<endl;

    return 0 ;
}
string days(int n)
{
    // Using Switch case to find the name of the day 
    string name;
    switch(n)
    {
        case 1:
        name = "Monday";
        break;
        case 2:
        name = "Tuesday";
        break;
        case 3:
        name = "Wednesday";
        break;
        case 4:
        name = "Thursday";
        break;
        case 5:
        name = "Friday";
        break;
        case 6:
        name = "Saturday";
        break;
        case 7:
        name = "Sunday";
        break;
        default: 
        name = "Invalid input!";
    }
    return name;
}