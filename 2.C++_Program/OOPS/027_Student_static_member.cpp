// Static admission number in the student example
#include <iostream>
using namespace std;
class student
{
public:
    static int no_of_students;
    string name;
    int rool;
    student(string name)
    {
        this->name = name; 
        ++no_of_students;
        this->rool = no_of_students;
    }
    void display()
    {
        cout << name<< " " << rool << endl;
    }
};
int student::no_of_students = 0;
int main()
{
    cout << "Inital number of students ";
    cout << student::no_of_students << endl;

    student s1("Darshan");
    s1.display();
    student s2("Amogha");
    s2.display();

    cout << "Final number of students ";
    cout << student::no_of_students << endl;

    return 0;
}