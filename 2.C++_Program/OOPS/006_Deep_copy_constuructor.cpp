// Deep copy constructor
#include <iostream>
using namespace std;
class text
{
    int x;
    int *p;

public:
    text(int a)
    {
        x = a;
        p = new int[a];
    }
    // deep copy constructor
    text(text &te)
    {
        x = te.x;
        p = new int[x];
        // should copy the value from the array else it will become array with different elements
        for(int i = 0 ;i<te.x;i++)
        {
            p[i]=te.p[i];
        }
    }
    int gettext()
    {
        return x;
    }
    int gettexta(int n)
    {
        return p[n];
    }

};
int main()
{
    text t(5);
    text temp(t);
    for(int i = 0 ;i<5;i++)
    {
        cout<<t.gettexta(i)<<" ";
    }
    cout<<endl;
    for(int i = 0 ;i<5;i++)
    {
        cout<<temp.gettexta(i)<<" ";
    }

    return 0;
}