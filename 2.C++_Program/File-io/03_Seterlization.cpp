// Sterlization
#include <iostream>
#include<fstream>
using namespace std;
class student
{
public:
    string name;
    int rool;
    string branch;
    friend ofstream &operator<<(ofstream &ifs, student &s);
    friend ifstream &operator>>(ifstream &ofs, student &s);
};
// to insert an object into an file so we are overloading the insertion operator
ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.rool << endl;
    ofs << s.branch ;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    ifs>>s.name>>s.rool>>s.branch;
    return ifs;
}
int main()
{
    student s;

    ifstream ifs("003student.txt");
    // ofs << s;
    ifs>>s;
    cout<<s.name<<" "<<s.rool<<" "<<s.branch<<endl;
    ifs.close();

    return 0;
}