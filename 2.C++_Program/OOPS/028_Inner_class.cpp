// Inner class
#include <iostream>
using namespace std;
class outer
{
public:
    int a;
    static int b;
    void fun()
    {
        i.display();
    }
    // inner class
    class inner
    {
    public:
        void display()
        {
            cout << "Displaying the inner class" << endl;
        }
    };
    inner i;
};
int outer::b = 9;
int main()
{
    outer::inner in;
    outer o;
    o.fun();

    return 0;
}