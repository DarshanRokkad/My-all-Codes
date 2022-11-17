// Friend function
#include <iostream>
using namespace std;
class your;
class test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    // void fun();
    friend your;
};
// void test::fun()
class your
{
    test t;
    void fun()
    {
        t.a = 9;
        t.b = 3;
        t.c = 6;
    }
};
int main()
{

    return 0;
}