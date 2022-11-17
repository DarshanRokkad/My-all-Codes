//Inheritance is an full time and part time employee 
// using hierarchial inheritance
#include<iostream> 
using namespace std; 
class employee
{
    string name;
    int id;
    public:
    employee(string name , int id )
    {
        this->name= name;
        this->id = id;
    }
    string getname()
    {
        return name;
    }
    int getid()
    {
        return id ;
    }
};
class fulltime : public employee
{
    int salary ;
    public:
    fulltime(string name , int id , int salary) : employee(name,id)
    {
        setsalary(salary);
    }
    void setsalary(int s)
    {
        if(s<0)
        {
            this->salary=0;
        }
        else{
            this->salary=s;
        }
    }
    void displayfull()
    {
        cout<<"Full time => "<<getname()<<" ; id = "<<getid()<<" ; rps."<<salary<<endl;
    }
};
class parttime : public employee 
{
    int wages ;
    public:
    parttime(string name , int id , int wages) : employee(name,id)
    {
        setwages(wages);
    }
    void setwages(int w)
    {
        if(w<0)
        {
            this->wages=0;
        }
        else{
            this->wages=w;
        }
    }
    void displaypart()
    {
        cout<<"Part time => "<<getname()<<" ; id = "<<getid()<<" ; rps."<<wages<<endl;
    }
};
int main() 
{ 
    fulltime anuj("Anju bhaiya",6829423,400000);
    parttime raju("Raju bhaiya",8923918,200000);
    anuj.displayfull();
    raju.displaypart();
  
    return 0 ;
}