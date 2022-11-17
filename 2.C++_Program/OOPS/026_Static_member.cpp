// Static member
#include <iostream>
using namespace std;
class test
{
private:
    int a;

public:
    static int count;
    test()
    {
        a = 10;
        count++;
    }
    static int getcount()
    {
        // a++; // => cannot access the data members of the class only can access only static data members
        return count++;
    }
};
// These is like a global varibale resitricted to only test class
int test::count = 0;
int main()
{
    // static data members
    cout << test::count<<endl;
    cout<<test::getcount()<<endl;
    cout<<"Data members"<<endl;
    test t1;
    cout << t1.count << endl;
    test t2;
    cout << t2.count << endl;

    // static function
    cout<<"Static member functions"<<endl;
    cout<<t1.getcount()<<endl;
    // cout<<t1::getcount; 

    return 0;
}