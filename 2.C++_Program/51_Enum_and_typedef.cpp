// Use of Enum and typedef in the program 
#include<iostream>
using namespace std;
typedef enum day{mon=1,tue,wed,thurs=10,fri,sat=7,sun}d;

typedef int marks; //avoid forgetting the things while doing long project

int main()
{
    d day;
    // d = 1;not possible 
    day = sun; 
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thurs<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<day<<endl; // it will print the index value in the enum

    marks m1 = 98;
    cout<<m1<<endl;

    return 0 ;
}