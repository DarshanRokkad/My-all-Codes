// object Funtion in C++
#include<iostream>
using namespace std;
class student
{
    public:
    string name ;
    int age ;
    char grade;
    student(string na , int ag ,char ch)
    {
        name = na ;
        age = ag ;
        grade = ch ;
    }
    // object funtion in C++
    // This is a funtion that tells the student has honours are not
    //  it will return a boolean i.e true =1 ,false=0
    bool hashonor()
    {
        if(age>=18)
        return true;
        return false;
    }
    string  gra()
    {
        if(grade > 'A')
        return "Not eligible" ;
        return "Eligile" ; // if grade is 
    }
};

int main()
{
    student s1("darshan",17,'A');
    cout<<s1.hashonor()<<endl; // answer is 0 because age == 18 so hashonor funtion returns false
    cout<<s1.gra()<<endl; //answer is Eligible because grade = A which is not greater than 'A' 
    
    return 0 ;
}