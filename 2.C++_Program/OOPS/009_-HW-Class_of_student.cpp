// HOme work in student question
#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int rool;
    int phy;
    int che;
    int bio;
    int total;

public:
    student(string name, int rool, int phy, int che, int bio)
    {
        setname(name);
        this->rool = rool;
        this->phy = phy;
        this->che = che;
        this->bio = bio;
        this->total = phy + che +bio;
    }
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    int getrool()
    {
        return rool;
    }
    int average()
    {
        return total/3;
    }
    char displayGrade()
    {
        int ave = total/3;
        if(ave>80)
        {
            return 'A';
        }
        else if (ave>40&&ave<80)
        {
            return 'B';
        }
        else{
            return 'C';
        }
    }
};
int main()
{
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    int rool ;
    cout<<"Enter Your rool number : ";
    cin>>rool;
    int phy , che , math ;
    cout<<"Enter your physics , chemistry , maths : ";
    cin>>phy>>che>>math;
    student s(name,rool,phy,che,math);
    cout<<s.getname()<<endl;
    cout<<s.getrool()<<endl;
    cout<<s.average()<<endl;
    cout<<s.displayGrade()<<endl;

    return 0;
}